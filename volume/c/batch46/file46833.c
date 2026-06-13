// fichero 46833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46833;

Registro46833 crear_registro46833(int id) {
    Registro46833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46833(Registro46833 r) {
    return r.valor + r.id;
}
