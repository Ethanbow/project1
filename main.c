//This program is used to encrypt or decrypt a message


#include <stdio.h>



int main()
{
    
   /* FILE *text;
    text = fopen("data.txt","r");
    if(text == NULL)
            perror("fopen()");   */
 
   char message[500];
   int key;
   char choice;     //Where the users choice will be storeded for menu
   char *ptr = message;
   message[500] = "hello";
   key = 4;
    
    
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
        case 'a':{
            char encrypt = EncryptRotateWithMessAndAmount(message[500], key);
            printf("%c",encrypt);
        }
        break;
        case 'b':{
            char decrypt = DecryptRotaionWithMessAndAmount(message[], key);
            printf("%c",decrypt);
            
        }
        break;
        case 'c':{
            
        }
        break;
        case 'd':{
            
        }
        break;
        case 'e':{
            
        }
        break;
        case 'f':{
            
        }
        break;
        default: printf("Incorrect option choice %c\nPlease enter a, b, c, d, e, or f as your choice\n", choice); // if the selection is incorrect this will tell the user to tell them there options they can choose to use 
    }

 
 
 

 

  return 0;
}





// This is the function that encrypts a given message and with a rotation cipher which changes the amount by a given number
int EncryptRotateWithMessAndAmount(char *message,int key)
{
	char character;
	int i;
	
	for(i = 0; message[i] != '\0'; ++i){
		character = message[i];
		
		if(character >= 'a' && character <= 'z'){
			character = character + key;
			
			if(character > 'z'){
				character = character - 'z' + 'a' - 1;
			}
			
			message[i] = character;
		}
		else if(character >= 'A' && character <= 'Z'){
			character = character + key;
			
			if(character > 'Z'){
				character = character - 'Z' + 'A' - 1;
			}
			
			message[i] = character;
		}
	}
	return message[i];    
}


//This function dycrypts a given message with a roatation cipher if the key is also known

int DecryptRotaionWithMessAndAmount(char *message,int key)
{
    char character;
	int i;
	
	
	for(i = 0; message[i] != '\0'; ++i)
	{
		character = message[i];
		
		if(character >= 'a' && character <= 'z')
		{
			character = character - key;
			
			if(character < 'a')
				character = character + 'z' - 'a' + 1;
			else
			    message[i] = character;
	    }

		else if(character >= 'A' && character <= 'Z')
		{
			character = character - key;
			
			if(character < 'A')
				character = character + 'Z' - 'A' + 1;
			
			
			else
			message[i] = character;
		}
    }
		return message[i];
}
	