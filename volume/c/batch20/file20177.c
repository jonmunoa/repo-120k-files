// fichero 20177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20177;

Registro20177 crear_registro20177(int id) {
    Registro20177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20177(Registro20177 r) {
    return r.valor + r.id;
}
