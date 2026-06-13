// fichero 42173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42173;

Registro42173 crear_registro42173(int id) {
    Registro42173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42173(Registro42173 r) {
    return r.valor + r.id;
}
