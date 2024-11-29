#include <stdio.h>
#include <ctype.h>

int count_words(FILE *file) {
    int count = 0;
    char ch;
    int in_word = 0;

    // Read each character from the file
    while ((ch = fgetc(file)) != EOF) {
        // Check if the character is a word delimiter (spaces, tabs, newlines)
        if (isspace(ch)) {
            in_word = 0;  // Not in a word anymore
        } else if (in_word == 0) {
            // If we were not in a word and now we find a non-space character, we found a new word
            in_word = 1;
            count++;  // Increment the word count
        }
    }
    return count;
}

int main() {
    FILE *input_file, *output_file;
    char input_filename[100], output_filename[100];

    // Ask the user for input and output filenames
    printf("Enter the input file name: ");
    scanf("%s", input_filename);
    printf("Enter the output file name: ");
    scanf("%s", output_filename);

    // Open the input file in read mode
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Could not open file %s for reading.\n", input_filename);
        return 1;
    }

    // Count the words in the input file
    int word_count = count_words(input_file);
    fclose(input_file);  // Close the input file

    // Open the output file in write mode
    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Could not open file %s for writing.\n", output_filename);
        return 1;
    }

    // Write the word count to the output file
    fprintf(output_file, "Word count: %d\n", word_count);
    fclose(output_file);  // Close the output file

    printf("Word count has been written to %s\n", output_filename);
    
    return 0;
}
