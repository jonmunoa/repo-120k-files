// fichero 1393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1393;

Registro1393 crear_registro1393(int id) {
    Registro1393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1393(Registro1393 r) {
    return r.valor + r.id;
}
