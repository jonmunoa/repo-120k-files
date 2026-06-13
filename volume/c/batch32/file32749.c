// fichero 32749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32749;

Registro32749 crear_registro32749(int id) {
    Registro32749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32749(Registro32749 r) {
    return r.valor + r.id;
}
