// fichero 14769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14769;

Registro14769 crear_registro14769(int id) {
    Registro14769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14769(Registro14769 r) {
    return r.valor + r.id;
}
