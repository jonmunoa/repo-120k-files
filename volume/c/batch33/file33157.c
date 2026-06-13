// fichero 33157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33157;

Registro33157 crear_registro33157(int id) {
    Registro33157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33157(Registro33157 r) {
    return r.valor + r.id;
}
