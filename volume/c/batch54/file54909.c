// fichero 54909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54909;

Registro54909 crear_registro54909(int id) {
    Registro54909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54909(Registro54909 r) {
    return r.valor + r.id;
}
