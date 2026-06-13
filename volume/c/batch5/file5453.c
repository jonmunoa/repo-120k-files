// fichero 5453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5453;

Registro5453 crear_registro5453(int id) {
    Registro5453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5453(Registro5453 r) {
    return r.valor + r.id;
}
