// fichero 16453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16453;

Registro16453 crear_registro16453(int id) {
    Registro16453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16453(Registro16453 r) {
    return r.valor + r.id;
}
