#include <stdio.h>

void main() {
    int key=1;
    int set_passcode;
    int passcode;
    int choice;
    printf("Set your passcode: ");
    scanf("%d",&set_passcode);
    printf("Enter passcode to unlock the door: ");
    scanf("%d",&passcode);
    if(passcode==set_passcode){
        key=0;
        printf("Door Unlocked %d",key);
    }
    else{
        printf("Invalid Password %d",key);
    }
}