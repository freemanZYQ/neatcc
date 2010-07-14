#define TABITEMS		(1 << 12)
#define container(ptr, type, field)	((type *) ((void *) (ptr) - \
							offsetof(type, field)))

struct tab {
	int head[TABITEMS];
	char *data[TABITEMS];
	int next[TABITEMS];
	int n;
};

void tab_add(struct tab *t, char *s);
void tab_del(struct tab *t, char *s);
char *tab_get(struct tab *t, char *s);
