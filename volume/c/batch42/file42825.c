// fichero 42825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42825;

Registro42825 crear_registro42825(int id) {
    Registro42825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42825(Registro42825 r) {
    return r.valor + r.id;
}
