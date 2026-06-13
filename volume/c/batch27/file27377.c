// fichero 27377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27377;

Registro27377 crear_registro27377(int id) {
    Registro27377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27377(Registro27377 r) {
    return r.valor + r.id;
}
