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
	char	string1[BUFFER_SIZE]; // The first string which will be typed by the user for concatenation
	char	string2[BUFFER_SIZE]; // The second string which will be typed by the user for concatenation
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
	printf("*** Start of Camparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE]; // The first string which will be typed by the user for comparison
	char compare2[BUFFER_SIZE]; // The second string which will be typed by the user for comparison
	int result;
	do {
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin); // Receives input for char 'compare1'
		compare1[strlen(compare1) - 1] = '\0'; // Count for the length of 'compare1'
		if (strcmp(compare1, "q") != 0) {
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin); // Receives input for char 'compare2'
			compare2[strlen(compare2) - 1] = '\0'; // // Count for the length of 'compare2'
			result = strcmp(compare1, compare2); // Compare the length of 'compare1' and 'compare2' using compare-strings function, and store the value to 'result'
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); // if 'compare1' is less than 'compare2', print out this sentence
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2); // if 'compare1' is equal to 'compare2', print out this sentence
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2); // if 'compare1' is greater than 'compare2', print out this sentence
		}
	} while (strcmp(compare1, "q") != 0); // The function will be terminated when the user typed q
	printf("*** End of Comparing Strings Demo ***\n\n");


/* Version 3 */
	printf("*** Start of Searching String Demo ***\n");
	char	haystack[BUFFER_SIZE]; // This string is the target sentence which will be searched by the second string
	char	needle[BUFFER_SIZE]; // This string is the search word
	char* occurrence = NULL;
	do {
		printf("Type the string (q - to quit):\n"); 
		fgets(haystack, BUFFER_SIZE, stdin); // Receives input for char 'haystack'
		haystack[strlen(haystack) - 1] = '\0'; // Count for the length of 'haystack'
		if (strcmp(haystack, "q") != 0) {
			printf("Type the substring:\n");
			fgets(needle, BUFFER_SIZE, stdin); // Receives input for char 'needle'
			needle[strlen(needle) - 1] = '\0'; // Count for the length of 'needle'
			occurrence = strstr(haystack, needle); // This is for finding the string of 'needle' in 'haystack'
			if (occurrence)
				printf("\'%s\' found at %d position\n", needle, // if 'haystack' has the word, the program displays this sentence
					(int)(occurrence - haystack));
			else
				printf("Not found\n"); // if 'haystack' doen't have the word, the program displays this sentence.

		}
	} while (strcmp(haystack, "q") != 0); // The function will be terminated when the user typed q
	printf("*** End of Searching Strings Demo ***\n\n");
}