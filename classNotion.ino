/*
 Name:		classNotion.ino
 Created:	3/24/2023 10:46:31 AM
 Author:	Imami Joel Betofe
*/

class Person {
public:
    void Displaying();

private:
    String name = "Alice";
    int age = 30;
    String address = "123 Main St";
};


Person personf;

// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset



void Person::Displaying() {
    
  
    Serial.println("The person age is: ");
    Serial.println(age);
    delay(3000);

}
void loop() {

    personf.Displaying();
}
