// fichero 27605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27605;

Registro27605 crear_registro27605(int id) {
    Registro27605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27605(Registro27605 r) {
    return r.valor + r.id;
}
