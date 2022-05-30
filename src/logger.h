#ifndef _STR_LOGGER_H_
#define _STR_LOGGER_H_

FILE* log_init(char *filename);
int logcat(FILE* log_file, char *message, log_level level);
int log_close(FILE* log_file);

#endif  //_STR_LOGGER_H_
