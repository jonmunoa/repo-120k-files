// fichero 1385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1385;

Registro1385 crear_registro1385(int id) {
    Registro1385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1385(Registro1385 r) {
    return r.valor + r.id;
}
