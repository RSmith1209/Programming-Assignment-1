//prototypes

# include <stdio.h>
int main(){
    char selection;
    int n;
    printf("Select an option:\n a) Rotation Encryption\n b) Rotation Decryption\n c) Substitution Encryption\n d) Substitution Decryption\n");
    printf("Option: ");
    scanf("%c", &selection);
    switch(selection){
        case 'a':
        //encryption of rotation cypher function prototype
        break;
        case 'b':
        //decryption of rotation cypher function prototype
        break;
        case 'c':
        //encryption of substitution cypher function prototype
        break;
        case 'd':
        //decryption of substitution cypher function prototype
        break;
    }

}

/////////////*encryption of rotation cypher definition*/////////////
void rotationEncrypt(char* text[100], int key){
   printf("Enter message to be encrypted: "); 
   scanf("%c", text);
   printf("Enter key: ");
   scanf("%d", key);
}


//decryption of rotation cypher definition

//encryption of substitution cypher definition

//decryption of substitution cypher definition