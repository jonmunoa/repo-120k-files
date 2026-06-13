// fichero 5585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5585;

Registro5585 crear_registro5585(int id) {
    Registro5585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5585(Registro5585 r) {
    return r.valor + r.id;
}
