// fichero 7521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7521;

Registro7521 crear_registro7521(int id) {
    Registro7521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7521(Registro7521 r) {
    return r.valor + r.id;
}
