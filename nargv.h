#ifndef NARGV_H
#define NARGV_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct NARGV {
    char **argv, *data;
    const char *error_message;
    int argc, data_length, error_index, error_code;
} NARGV;

void nargv_free(NARGV* props);
void nargv_ifs(const char *nifs);
NARGV *nargv_parse(const char *input);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* NARGV_H */
