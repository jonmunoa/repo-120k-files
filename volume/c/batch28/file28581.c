// fichero 28581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28581;

Registro28581 crear_registro28581(int id) {
    Registro28581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28581(Registro28581 r) {
    return r.valor + r.id;
}
