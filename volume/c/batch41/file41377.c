// fichero 41377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41377;

Registro41377 crear_registro41377(int id) {
    Registro41377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41377(Registro41377 r) {
    return r.valor + r.id;
}
