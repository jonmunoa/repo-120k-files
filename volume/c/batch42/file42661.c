// fichero 42661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42661;

Registro42661 crear_registro42661(int id) {
    Registro42661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42661(Registro42661 r) {
    return r.valor + r.id;
}
