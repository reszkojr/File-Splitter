/* 
    Program's logic

    You put in the "split_files" function parameter the file that you want
    to split, and the size in megabytes that each file will be splitted.

    Imagine that the file to be split has 32MB and we want to split it into 
    segments of 8MB each. The amount of segments that will exist is gonna be
    32 / 8, which is 4.

    So there will be 4 segments of 8MB each.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int get_file_size(FILE *file);
int split_file(FILE *file, float megabytes); // This function receives a file to be split and the megabytes that each segment will have

int main(void) {
    FILE *file = fopen("testfile.txt", "r"); // Opens the "textfile.txt" in read-only mode.
    // printf("\"textfile.txt\" size in bytes is %d.\n", get_file_size(file));

    split_file(file, 3);
}

int split_file(FILE *file, float megabytes) {

    long segments_size = megabytes * pow(1024, 2);      // Size of each segment in bytes
    long file_size = get_file_size(file);               // File size in bytes

    float file_size_mb = file_size / pow(1024, 2);        // File size in megabytes

    /*
        We use the file size in megabytes to calculate 
        the remainder of the division between it and 
        the segments size in megabytes.
    */
    
    int number_of_segments = ceil(file_size_mb / megabytes);

    // Number of segments to be created
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
    if (file_size < segments_size) return -1;           // If the file is smaller than the segments size, return

    fseek(file, 0, SEEK_END);                           // Makes the stream (cursor) go to the end of the file

    for (int i = 1; i <= number_of_segments; i++) {     // This for loop creates and split the files for us
        char num[3];
        char segment_name[11] = "split_";
        sprintf(num, "%d", i);                          // Stores the "i" integer into the "num" string
        strcat(segment_name, num);                      // Concatenates the "segment_name" with "num"

        printf("%s\n", segment_name);

        FILE *segment_file = fopen(segment_name, "w");          // Creates the segment file number N, being N i
    }
}

int get_file_size(FILE *file) {
    long size = 0L;
    fseek(file, 0L, SEEK_END);   // Moves the stream (cursor) to the end of the file.
    size = ftell(file);          // ftell is a function that returns the current position of the current stream, hence being the size of the file.
    return size;                 // (ftell returns the size in bytes)
}











