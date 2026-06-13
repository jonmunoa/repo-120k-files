// fichero 1509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1509;

Registro1509 crear_registro1509(int id) {
    Registro1509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1509(Registro1509 r) {
    return r.valor + r.id;
}
