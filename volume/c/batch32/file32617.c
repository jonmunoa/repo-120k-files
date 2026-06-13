// fichero 32617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32617;

Registro32617 crear_registro32617(int id) {
    Registro32617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32617(Registro32617 r) {
    return r.valor + r.id;
}
