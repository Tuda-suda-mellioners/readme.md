#ifndef MSG_SPLIT_H
#define MSG_SPLIT_H

typedef struct {
    char *fragments[MAX_FRAGMENTS];
    int count;
} FragmentList;

void split_html(const char *html, int max_len, FragmentList *result);
void free_fragments(FragmentList *fragments);

#endif // MSG_SPLIT_H
