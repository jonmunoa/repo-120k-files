// fichero 14645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14645;

Registro14645 crear_registro14645(int id) {
    Registro14645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14645(Registro14645 r) {
    return r.valor + r.id;
}
