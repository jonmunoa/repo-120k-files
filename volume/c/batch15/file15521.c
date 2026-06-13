// fichero 15521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15521;

Registro15521 crear_registro15521(int id) {
    Registro15521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15521(Registro15521 r) {
    return r.valor + r.id;
}
