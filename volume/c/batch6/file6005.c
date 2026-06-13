// fichero 6005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6005;

Registro6005 crear_registro6005(int id) {
    Registro6005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6005(Registro6005 r) {
    return r.valor + r.id;
}
