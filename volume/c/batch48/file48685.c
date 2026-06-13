// fichero 48685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48685;

Registro48685 crear_registro48685(int id) {
    Registro48685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48685(Registro48685 r) {
    return r.valor + r.id;
}
