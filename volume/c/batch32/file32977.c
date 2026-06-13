// fichero 32977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32977;

Registro32977 crear_registro32977(int id) {
    Registro32977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32977(Registro32977 r) {
    return r.valor + r.id;
}
