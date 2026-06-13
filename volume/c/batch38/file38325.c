// fichero 38325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38325;

Registro38325 crear_registro38325(int id) {
    Registro38325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38325(Registro38325 r) {
    return r.valor + r.id;
}
