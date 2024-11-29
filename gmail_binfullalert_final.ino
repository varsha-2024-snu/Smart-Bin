#include <ESP8266WiFi.h>
#include <ESP_Mail_Client.h>
#define WIFI_SSID "wifi_name"
#define WIFI_PASSWORD "wifi_pswd"
#define SMTP_server "smtp.gmail.com"
#define SMTP_Port 465
#define sender_email "senderemail@gmail.com"
#define sender_password "sender_pswd"
#define Recipient_email "recipientemail@gmail.com"
#define Recipient_name "name" // it can be filled or left blank
SMTPSession smtp;

const int trigPin = ; //enter pin num
const int echoPin = ;  //enterpin num
const int dusbin_threshold = ; //enter threshold
int distance;
long duration; 
bool dustbin_filled = true;


void setup(){

  pinMode(trigPin, OUTPUT);  
	pinMode(echoPin, INPUT);  
  Serial.begin(115200);
  Serial.println();
  Serial.print("Connecting...");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
  { Serial.print(".");
    delay(200);
   }
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println();
  smtp.debug(1);

}

void loop() {

    digitalWrite(trigPin, LOW);  
    delayMicroseconds(2);  
    digitalWrite(trigPin, HIGH);  
    delayMicroseconds(10);  
    digitalWrite(trigPin, LOW);  
    duration = pulseIn(echoPin, HIGH); 
    distance = (duration*0.0343)/2;  
    Serial.print("Distance: ");
    Serial.println(distance); 
    if(distance <= dusbin_threshold  && dustbin_filled){
      Serial.println("Dustbin Filled");
      send_mail();
      dustbin_filled = false;
    }
    delay(3000);

}


void send_mail(){

    ESP_Mail_Session session;
    session.server.host_name = SMTP_server ;
    session.server.port = SMTP_Port;
    session.login.email = sender_email;
    session.login.password = sender_password;
    session.login.user_domain = ""; // can be left blank

    SMTP_Message message;
    message.sender.name = "Smart Bin";
    message.sender.email = sender_email;
    message.subject = "Smart bin full alert!";
    message.addRecipient(Recipient_name,Recipient_email);

    String textMsg = "Your smartbin is full, please empty the dustbin !";
    message.text.content = textMsg.c_str();
    message.text.charSet = "us-ascii";
    message.text.transfer_encoding = Content_Transfer_Encoding::enc_7bit;

    if (!smtp.connect(&session))
      return;
    if (!MailClient.sendMail(&smtp, &message))
      Serial.println("Error sending Email, " + smtp.errorReason());

}
