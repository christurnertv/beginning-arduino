# Lesson 2a: Blink with Button Input

Now that we have learned about digital outputs, it is time to learn about digital inputs. In this lesson, we will use one of the I/O pins on the Arduino to read a digital signal (0 or 1), based on the voltage detected on the pin.

## Reading a Digital Input

Arduino provides the ```digitalRead()``` method for reading a digital input. Simply pass the number (or named variable) of the pin to read the value as follows:

```int buttonState = digitalRead(buttonPin);```

Once you have read a digital input, you can do many things. Perhaps you need to make some decisions based on the value, or maybe you want to assign the read value as an output like this:

```digitalWrite(anotherPin, buttonState);```

You may notice that in the last lesson we were writing 'LOW' or 'HIGH' using the ```digitalWrite()``` method, but remember, these are just constants that represent 0 or 1 respectively. So, when you read a 0 or 1 from a pin, you can simply write the value to another.

## Assignment 2a

Use the things you have learned about setting digital outputs to read a value from a switch and turn on or off an led based on the switch state. Use the circuit diagram below, which we will discuss when you are complete.

![Assignment 2 Circuit Diagram](2_blink_button_bb.png)


# Lesson 2b: Blink via Button Toggle

For the second part of this lesson, we will change the switch operation from a push-and-hold to a toggle. This way, when we press the button, the led will turn on, then when we press again, it will turn off. In this lesson, we will be learning about conditionals.

## Conditionals

Remember how we discussed the possiblity of making decisions based on a read input value? That is exactly what we are going to do now. We can do that by using an ```if``` statement. Here is an example:

```
if (buttonState == HIGH) {
	// do something here
}
```

We can also have a condition that gets executed if our first condition is false by using an ```else``` statement.

```
if (buttonState == HIGH) {
	// do something here
} else {
	// hmm, buttonState wasn't high. do something else.
}
```

One thing to note when making comparisons with digital values is that we can simply use the value directly like this: ```if (buttonState)```. This is because 0 gets evaluated to false, and a non-zero value gets evaluated to true. Keep this in mind, but also make sure your code is easily readable.

In the above ```if``` examples, we used the ```==``` (equal to) operator. There are many other operators available such as ```!=``` (not equal to), ```>``` (greater than), ```<``` (less than), etc. See the full list [here](http://arduino.cc/en/Reference/HomePage) under the 'Comparison Operators' section.

## Assignment 2b

Use what you have learned about conditionals to create a simple button toggle. No changes to the circuit are needed. Note: This sketch isn't expected to work flawlessly. It will have some issues we will address in the next lesson.


Copyright © 2013-2014 Turner Logic, LLC