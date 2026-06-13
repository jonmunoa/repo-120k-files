// fichero 42453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42453;

Registro42453 crear_registro42453(int id) {
    Registro42453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42453(Registro42453 r) {
    return r.valor + r.id;
}
