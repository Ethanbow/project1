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
 6) decrypt an encrypted message with a substituion cipher text only
 */

//https://www.thecrazyprogrammer.com/2016/11/caesar-cipher-c-c-encryption-decryption.html
//http://che1.vk2dds.net:8080/dashboard/#/ide/ethanbow/LectureDemo



#include <stdio>



int main()
{
    

  return 0;
}

// This is the function that encrypts a given message and with a rotation cypher which changes the amount by a given number
int EncryptRotateWithMessAndAmount(message,key)
{
    
	char message[100], character;
	int i, key;
	
	for(i = 0; message[i] != '\0'; ++i){
		character = message[i];
		
		if(character >= 'a' && character <= 'z'){
			character = character + key;
			
			if(character > 'z'){
				character = character - 'z' + 'a' - 1;
			}
			
			message[i] = character;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			character = character + key;
			
			if(ch > 'Z'){
				character = character - 'Z' + 'A' - 1;
			}
			
			message[i] = character;
		}
	}
	return message[i];    
}

int DecryptRotaionWithMessAndAmount()
{
    char message[100], character;
	int i, key;
	
	
	for(i = 0; message[i] != '\0'; ++i){
		character = message[i];
		
		if(character >= 'a' && character <= 'z'){
			character = character - key;
			
			if(ch < 'a'){
				character = character + 'z' - 'a' + 1;
			}
			
			message[i] = character;
		}
		else if(character >= 'A' && character <= 'Z'){
			character = character - key;
			
			if(character < 'A'){
				character = character + 'Z' - 'A' + 1;
			}
			
			message[i] = character;
			}
		return message[i];