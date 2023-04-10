#include "main.h"

int append_text_to_file(const char *filename, char *text_content) {
    int file_descriptor, write_count, text_length = 0;

    if (filename == NULL) {
        return -1;
    }

    if (text_content != NULL) {
        while (text_content[text_length]) {
            text_length++;
        }
    }

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    write_count = write(file_descriptor, text_content, text_length);

    if (file_descriptor == -1 || write_count == -1) {
        return -1;
    }

    close(file_descriptor);
    return 1;
}

