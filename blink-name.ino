// ------------
// Blink your name with LED in morse code
// ------------

/*-------------

This program will blink an led on and off in morse code.
It blinks the D7 LED on your Particle device. If you have an LED wired to D6, it will blink that LED as well.

-------------*/


int led1 = D6; // Instead of writing D6 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.


void setup() {

	// We are going to tell our device that D6 and D7 (which we named led1 and led2 respectively) are going to be output
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}

// dash function that takes integer for how many times it needs to make a long flash
void dash(int n){
    for(int i=0; i < n; i++){
        digitalWrite(led1, HIGH);
	    digitalWrite(led2, HIGH);

    	// We'll leave it on for 0.5 miliseconds...
    	delay(500);
    
    	// Then we'll turn it off...
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	// Wait 0.5 second...
    	delay(500);
    }
}

// dot function that takes integer for how many times it needs to make a short flash
void dot(int n){
    for(int i=0; i < n; i++){
        digitalWrite(led1, HIGH);
	    digitalWrite(led2, HIGH);

    	// We'll leave it on for 1 miliseconds...
    	delay(100);
    
    	// Then we'll turn it off...
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	// Wait 0.5 second...
    	delay(500);
    }
}


// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.

void loop() {
    //here we will input our integers for each of the letters and make 1 second deley between letters
    //we also have a bigger delay at the end to signify end of the name
    dash(2);
    
    delay(1000);
    dot(2);
    
    delay(1000);
    dot(1);
    dash(1);
    dot(2);
    
    delay(1000);
    dash(3);
    
    delay(1000);
    dot(3);
    delay(3000);
	// And repeat!
}
