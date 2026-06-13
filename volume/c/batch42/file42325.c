// fichero 42325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42325;

Registro42325 crear_registro42325(int id) {
    Registro42325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42325(Registro42325 r) {
    return r.valor + r.id;
}
