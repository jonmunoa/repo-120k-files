// fichero 32933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32933;

Registro32933 crear_registro32933(int id) {
    Registro32933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32933(Registro32933 r) {
    return r.valor + r.id;
}
