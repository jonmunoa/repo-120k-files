// fichero 42085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42085;

Registro42085 crear_registro42085(int id) {
    Registro42085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42085(Registro42085 r) {
    return r.valor + r.id;
}
