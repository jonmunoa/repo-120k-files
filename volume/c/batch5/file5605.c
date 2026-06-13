// fichero 5605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5605;

Registro5605 crear_registro5605(int id) {
    Registro5605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5605(Registro5605 r) {
    return r.valor + r.id;
}
