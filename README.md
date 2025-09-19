SIMULATION OF AN ELECTRICAL SWITCH



RESEARCH:
Any system that provides its owner/user with a reasonable degree of protection against one or more real or imagined dangers, threats, or nuisances (such as physical attack, theft of property, unwanted human or animal intrusion, machine breakdown, or risks from fire, electric shock, or vermin infestation, etc.) can be described as a ‘security’ system.
An ‘electronic’ security system is one in which the system’s actions are heavily dependent on electronic circuitry. Simple examples of such systems are electronic door bells and mouse traps, key-pad door locks, and domestic burglar alarms.


ANALYSIS:
Based on the concept of electronic security systems, I decided to make a system to simulate the function of a “keypad door lock”. The idea is to create a system which locks or unlocks the door to a secure place by entering a passcode. Naturally, the user will have to enter a valid passcode to be able to disarm the lock. By default, the door will be locked. To lock it again, the door simply needs to be closed, and the lock engages automatically.
	
IDEATION:
Design a C program to simulate operation of an electrical switch where the program takes input value either 0 or 1 representing the switch being off or on. Using a suitable conditional statement, the program should interpret the input values & display the corresponding condition as on or off. Additionally, the program should handle invalid input values & provide appropriate error messages.
Algorithm:
Step 1: Start
Step 2: Set key=1
Step 3: Input set_passcode from user, this will be the passcode set       by the user.
Step 4: Input password from user in order to unlock the door
Step 5: If password=set_passcode, set key=0, print “Door Unlocked”
		Step 6: Else print “Invalid Passcode”
		Step 7: End
