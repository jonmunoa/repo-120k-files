// fichero 42417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42417;

Registro42417 crear_registro42417(int id) {
    Registro42417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42417(Registro42417 r) {
    return r.valor + r.id;
}
