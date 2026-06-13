// fichero 14325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14325;

Registro14325 crear_registro14325(int id) {
    Registro14325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14325(Registro14325 r) {
    return r.valor + r.id;
}
