// fichero 42761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42761;

Registro42761 crear_registro42761(int id) {
    Registro42761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42761(Registro42761 r) {
    return r.valor + r.id;
}
