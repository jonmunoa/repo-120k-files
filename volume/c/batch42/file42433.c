// fichero 42433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42433;

Registro42433 crear_registro42433(int id) {
    Registro42433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42433(Registro42433 r) {
    return r.valor + r.id;
}
