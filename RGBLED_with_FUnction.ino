https://www.tinkercad.com/things/6F3NwB7IznH-rgb-led-with-function/editel
// defined Pins
#define red_LED 2//connect red LED to Digital pin 2 of Arduino
#define green_LED 3//connect green LED to Digital pin 3 of Arduino
#define blue_LED 4//connect blue LED to Digital pin 4 of Arduino
int pause = 1000; // delclare delay 1 second
//declare functions for show the colors
void red()//function for red color
{
  digitalWrite(red_LED, HIGH);
  digitalWrite(green_LED, LOW);
  digitalWrite(blue_LED, LOW);
}
void green()//function for green color
{
  digitalWrite(red_LED, LOW);
  digitalWrite(green_LED, HIGH);
  digitalWrite(blue_LED, LOW);
}
void blue()//function for blue color
{
  digitalWrite(red_LED, LOW);
  digitalWrite(green_LED, LOW);
  digitalWrite(blue_LED, HIGH);
}
void yellow()//function for yellow color
{
  digitalWrite(red_LED, HIGH);
  digitalWrite(green_LED, HIGH);
  digitalWrite(blue_LED, LOW);
}
void magenta() //function for majenta color
{
  digitalWrite(red_LED, LOW);
  digitalWrite(green_LED, LOW);
  digitalWrite(blue_LED, HIGH);
}
void cyne() //function for cyne color
{
  digitalWrite(red_LED, HIGH);
  digitalWrite(green_LED, LOW);
  digitalWrite(blue_LED, HIGH);
}
void white() //function for whit color
{
  digitalWrite(red_LED, HIGH);
  digitalWrite(green_LED, HIGH);
  digitalWrite(blue_LED, HIGH);
}

void setup()
{

  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  red();// function call-red
  delay(pause);
  blue();// function call-blue
  delay(pause);
  green();// function call-green
  delay(pause);
  yellow();// function call-yellow
  delay(pause);
  magenta();// function call-magenta
  delay(pause);
  cyne();// function call-cyne
  delay(pause);
  white();// function call white
  delay(pause);
}
