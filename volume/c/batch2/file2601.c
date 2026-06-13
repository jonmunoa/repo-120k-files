// fichero 2601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2601;

Registro2601 crear_registro2601(int id) {
    Registro2601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2601(Registro2601 r) {
    return r.valor + r.id;
}
