// fichero 14157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14157;

Registro14157 crear_registro14157(int id) {
    Registro14157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14157(Registro14157 r) {
    return r.valor + r.id;
}
