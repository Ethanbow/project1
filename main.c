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



#include <stdio>



int main()
{
    

  return 0;
}


int EnRotateWithMessAndAmount()
{
    char message[];     // the array to store the message into
    char character;     // wherer the letters will be stored once they have gone into the array
    int i;              // shows the postion in the array
    int key;            // stores the key that has been input
    
    printf("Enter a message to Encrypt: \n");
    scanf("%c", &message);
    printf("Please enter your key: \n");
    scanf("%d",&key);
    
    for (i=0; message[i]; ++i)
    {
        character = message[i];      //stores the readed letter from message into character
        
        if(character >=)
    }
    
}