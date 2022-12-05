// Programmer: Shinjo Kang
// Group No.: Bb 01
// Program: This function is for concatenating two strings
// This program is a final project of CPR101NAA

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h" 


void manipulating() {
	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	string1[BUFFER_SIZE]; // The first string which will be typed by the user
	char	string2[BUFFER_SIZE]; // The second string which will be typed by the user
	do {
		printf("Type the 1st string (q - to quit):\n"); 
		fgets(string1, BUFFER_SIZE, stdin); // Receives input for char string1
		string1[strlen(string1) - 1] = '\0';
		if ((strcmp(string1, "q") != 0)) { // The function will be terminated when the user typed q
			printf("Type the 2nd string:\n"); 
			fgets(string2, BUFFER_SIZE, stdin); // Receives input for char string2
			string2[strlen(string2) - 1] = '\0';
			strcat(string1, string2); // Concatenate string 1 and string 2
			printf("Concatenated string is \'%s\'\n", string1); // Print the concatenated string
		}
	} while (strcmp(string1, "q") != 0); // The function will be terminated when the user typed q
	printf("*** End of Concatenating Strings Demo ***\n\n");


/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}