// fichero 42573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42573;

Registro42573 crear_registro42573(int id) {
    Registro42573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42573(Registro42573 r) {
    return r.valor + r.id;
}
