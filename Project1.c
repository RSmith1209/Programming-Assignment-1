/////////////////*prototypes*//////////////////
void rotationEncrypt(char* text, int key);
void rotationDecrypt(char* text, int key);
void subEncrypt();
void subDecrypt();
void bruteDecrypt();
///////////////////////////////////////////////
# include <stdio.h>
int main(){
    char text[100];
    int key;
    int selection;
////////////////////////////*MENU*//////////////////////////////////////////
    printf("Select an option:\n 1) Rotation Encryption\n 2) Rotation Decryption\n 3) Substitution Encryption\n 4) Substitution Decryption\n 5) Brute force Rotatation Decryption\n");
    printf("Option: "); // Menu is printed
    scanf(" %d", &selection);
    switch(selection){
        case 1:
        rotationEncrypt(text, key);//encryption of rotation cypher function prototype
        break;
        case 2:
        rotationDecrypt(text, key);//decryption of rotation cypher function prototype
        break;
        case 3:
        subEncrypt();//encryption of substitution cypher function prototype
        break;
        case 4:
        subDecrypt();//decryption of substitution cypher function prototype
        break;
        case 5:
        bruteDecrypt();//brute force decryption of rotation cypher prototype
        break;
    }
/////////////////////////////////////////////////////////////////////////
}

/////////////*encryption of rotation cypher definition*/////////////
void rotationEncrypt(char* text, int key){
   char msg;
   int n;
   printf("Enter message to be encrypted: "); 
   scanf(" %[^\n]*c", text);
   printf("Key: ");
   scanf("%d", &key);
   for(n = 0; text[n] != '\0'; ++n){ //the loop for each character of message individually having the key added to it
	    msg = text[n]; 
	    
	if (msg >= 'A' && msg <= 'Z') { //Capital letters have key added
	    msg = msg + key;
	    
	    if (msg > 'Z')   {
	       msg = msg - 'Z' + 'A' - 1; //returns any letters out of range back into range 
	    }
	    text[n] = msg; //individual character re-entered into string as new character post rotation
	}
    
}
    printf("Encrypted message is: %s\n", text);
    
}
//////////////////////////////////////////////////////////////////////

///////////////*decryption of rotation cypher definition*//////////////
void rotationDecrypt(char* text, int key){
  char msg;
  int n;
  printf("Enter message to be decrypted: "); 
   scanf(" %[^\n]*c", text);
   printf("Key: ");
   scanf("%d", &key);
  for(n = 0; text[n] != '\0'; ++n){ // the loop for each character of message individually having key removed
	    msg = text[n];
	    
	if (msg >= 'A' && msg <= 'Z')  { //the command that removes the key
	    msg = msg - key;
	    
	    if (msg < 'A')   { //returns any letters out of range back into range
	       msg = msg + 'Z' - 'A' +1; 
	    }
	    text[n] = msg; //individual character re-entered into string as the new character (re-rotated back into correct position)
	}
    
}
printf("Decrypted message is: %s\n", text);
}
//////////////////////////////////////////////////////////////////////

////////////////*encryption of substitution cypher definition*//////////
void subEncrypt(){

    char text[100], subAlpha[26];
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U','V','W','X','Y','Z'}; // alphabet declared
    char character;
    int i, n;
    printf("Enter a message to encrypt: \n");
    scanf(" %[^\n]*c", text);
    printf("Enter your substituted alphabet IN CAPITALS: ");
    scanf(" %s", subAlpha);
    
    for(i = 0; text[i] != '\0'; i++) { //the loop that each individual letter in message is replaced with the substituted letter
        character = text[i]; 
        
        if(character >= 'a' && character <= 'z') { //command that converts any lower case entered letters to upper case
            character = character -32;
        }
    
        for (n = 0; n <= 25; n++)   { // the new substituted letter replaces the original in the string
            if (character == alpha[n])  {
            character = subAlpha[n];
            text[i] = character;
            break;
        }
    }
}
    printf("Encrypted message is: %s\n", text);
}
///////////////////////////////////////////////////////////////////////
/////////////*decryption of substitution cypher definition*////////////
void subDecrypt() {
    
char text[100], subAlpha[26];
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U','V','W','X','Y','Z'};
    char character;
    int i, n;
    printf("Enter a message to decrypt: \n");
    scanf(" %[^\n]*c", text);
    printf("Enter the substituted alphabet IN CAPITALS: ");
    scanf(" %s", subAlpha);
    
    for(i = 0; text[i] != '\0'; i++) { //the loop that each individual letter in message is replaced with the original letter
        character = text[i]; 
        
        if(character >= 'a' && character <= 'z') { //command that converts any lower case entered letters to upper case
            character = character -32;
        }
    
        for (n = 0; n <= 25; n++) {
            if (character == subAlpha[n])  { // the new original letter replaces the substituted in the string
            character = alpha[n];
            text[i] = character;
            break;
        }
    }
}
    printf("Decrypted message is: %s\n", text);
}
/////////////////////////////////////////////////////////////////////

/////////////////////*Brute force attack on rotation encryption*////////
//Code contains the same rotation decryption code of original however////
//instead of entering a key all possible keys are tested using a for loop//
/////////////////////////////////////////////////////////////////////////
void bruteDecrypt(){
  char* msg, text[100];
  int n, key;
  printf("Enter message to be decrypted: "); 
  scanf(" %[^\n]*c", text);
  for(key = 1; key < 27; key++) {
    for(n = 0; text[n] != '\0'; ++n){
	    msg = text[n];
	    
	   if (msg >= 'A' && msg <= 'Z')   {
	    msg = msg - 1;
	    
	       if (msg < 'A')   {
	       msg = msg + 'Z' - 'A' +1; 
	       }
	  text[n] = msg;     
	}
    
}
printf("Decrypted message is: %s, with key %d\n", text, key);
}
}
////////////////////////////////////////////////////////////////////