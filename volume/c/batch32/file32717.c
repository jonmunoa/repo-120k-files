// fichero 32717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32717;

Registro32717 crear_registro32717(int id) {
    Registro32717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32717(Registro32717 r) {
    return r.valor + r.id;
}
