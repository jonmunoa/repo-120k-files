// fichero 14661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14661;

Registro14661 crear_registro14661(int id) {
    Registro14661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14661(Registro14661 r) {
    return r.valor + r.id;
}
