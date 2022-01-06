/* 
    Program's logic

    1. You put in the function "split_files" parameter the file that you want
    to split, and the size that each file will be splitted.

    Imagine that the file to be split has 32MB and we want to split it into 
    segments of 8MB each. The amount of segments that will exist is gonna be
    32 / 8, which is 4.

    So there will be 4 segments of 8MB each.

*/

#include <stdio.h>
#include <stdlib.h>

int get_file_size(FILE *file);
int split_file(FILE *file, int megabytes); // This function receives a file to be split and the megabytes that each segment will have

int main(void) {
    // FILE *file = fopen("testfile.txt", "r"); // Opens the "textfile.txt" in read-only mode.
    // printf("\"textfile.txt\" size in bytes is %d.\n", get_file_size(file));
}

int split_file(FILE *file, int megabytes) {

}

int get_file_size(FILE *file) {
    long size = 0L;
    fseek(file, 0L, SEEK_END);   // Moves the stream (cursor) to the end of the file.
    size = ftell(file);          // ftell is a function that returns the current position of the current stream, hence being the size of the file.
    return size;                 // (ftell returns the size in bytes)
}











