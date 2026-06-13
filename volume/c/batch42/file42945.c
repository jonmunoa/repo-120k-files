// fichero 42945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42945;

Registro42945 crear_registro42945(int id) {
    Registro42945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42945(Registro42945 r) {
    return r.valor + r.id;
}
