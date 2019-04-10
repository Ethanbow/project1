/*key is an int
This cipher can be described mathematically using the modulus operator. The “key” is an integer, k,
between -25 and 25 (0 and 26 imply ”no encryption”) and each letter is allocated a number:
a = 0, b = 1, c = 2, ..., z = 25.
Encryption can then be performed on a message letter, m, by defining the encryption function, e(m), as:
e(x) = (m + k)(mod 26)
where “mod” means the modulus operator (% symbol in C).
The decryption of a cipher text letter, c, can be defined by a decryption function, d(c), as follows:
d(c) = (c − k)(mod 26)*/

/*
 write all the stuff need to do in functions
 Functions needed:
 1) Encryption with a rotaion cipher given message and roation amount
 2) decryption of an encrypted message with a rotation cipher tect and rotaion amount
 3) Encryption using a substituion ciper given message and alphabet substition
 4) Decrypt an encrypted message using substituion given cipher text and substition
 5) Decrypt an encrypted message with a rotation cyper given text ony
 6) decrypt an encrypted message with a substituion cypher text only
 */

//https://www.thecrazyprogrammer.com/2016/11/caesar-cipher-c-c-encryption-decryption.html
//http://che1.vk2dds.net:8080/dashboard/#/ide/ethanbow/LectureDemo



#include <stdio.h>



int main()
{
    
    FILE *text;
    text = fopen("data.txt","r");
    if(text == NULL)
            perror("fopen()");
    
    //char message[1000];
   // int key;
   char choice;         //Where the users choice will be storeded for menu
    
    
    //This is the user menu for choosing the way they want there message to be encrypted or decrypted
    printf("Please select a the way you want your encryption or decryption to be done\n");
    printf("a) Encryption with a rotaion cipher given message and roation amount\n");
    printf("b) decryption of an encrypted message with a rotation cipher text and rotaion amount\n");
    printf("c) Encryption using a substituion cipher with a given message and alphabet substition\n");
    printf("d) Decrypt an encrypted message using substituion given cipher text and substition\n");
    printf("e) Decrypt an encrypted message with a rotation cipher given text only\n");
    printf("f) decrypt an encrypted message with a substituion cipher text only\n");
    //scans the user input letter and places it into choice
    scanf("%c", &choice);
    
    switch(choice)
    {
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        default: printf("Incorrect option choice %c\nPlease enter a, b, c, d, e, or f as your choice\n", choice); // if the selection is incorrect this will tell the user to tell them there options they can choose to use 
    }

 
 
 

 

  return 0;
}





// This is the function that encrypts a given message and with a rotation cipher which changes the amount by a given number
int EncryptRotateWithMessAndAmount()
{
    
	char message[1000];
	char character;
	int i;
	int keyRotate;
	
	for(i = 0; message[i] != '\0'; ++i){
		character = message[i];
		
		if(character >= 'a' && character <= 'z'){
			character = character + keyRotate;
			
			if(character > 'z'){
				character = character - 'z' + 'a' - 1;
			}
			
			message[i] = character;
		}
		else if(character >= 'A' && character <= 'Z'){
			character = character + keyRotate;
			
			if(character > 'Z'){
				character = character - 'Z' + 'A' - 1;
			}
			
			message[i] = character;
		}
	}
	return message[i];    
}


//This function dycrypts a given message with a roatation cipher if the key is also known

int DecryptRotaionWithMessAndAmount()
{
    char message[1000], character;
	int i, Rotatekey;
	
	
	for(i = 0; message[i] != '\0'; ++i)
	{
		character = message[i];
		
		if(character >= 'a' && character <= 'z')
		{
			character = character - Rotatekey;
			
			if(character < 'a')
				character = character + 'z' - 'a' + 1;
			else
			    message[i] = character;
	    }

		else if(character >= 'A' && character <= 'Z')
		{
			character = character - Rotatekey;
			
			if(character < 'A')
				character = character + 'Z' - 'A' + 1;
			
			
			else
			message[i] = character;
		}
    }

		//
		return message[i];
}
	