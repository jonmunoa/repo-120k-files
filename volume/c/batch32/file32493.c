// fichero 32493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32493;

Registro32493 crear_registro32493(int id) {
    Registro32493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32493(Registro32493 r) {
    return r.valor + r.id;
}
