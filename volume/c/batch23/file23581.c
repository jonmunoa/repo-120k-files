// fichero 23581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23581;

Registro23581 crear_registro23581(int id) {
    Registro23581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23581(Registro23581 r) {
    return r.valor + r.id;
}
