// fichero 4157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4157;

Registro4157 crear_registro4157(int id) {
    Registro4157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4157(Registro4157 r) {
    return r.valor + r.id;
}
