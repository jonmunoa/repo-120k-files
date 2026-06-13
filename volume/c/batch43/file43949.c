// fichero 43949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43949;

Registro43949 crear_registro43949(int id) {
    Registro43949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43949(Registro43949 r) {
    return r.valor + r.id;
}
