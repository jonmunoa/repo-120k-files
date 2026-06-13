// fichero 53385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53385;

Registro53385 crear_registro53385(int id) {
    Registro53385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53385(Registro53385 r) {
    return r.valor + r.id;
}
