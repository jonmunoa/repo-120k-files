// fichero 14581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14581;

Registro14581 crear_registro14581(int id) {
    Registro14581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14581(Registro14581 r) {
    return r.valor + r.id;
}
