// fichero 7885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7885;

Registro7885 crear_registro7885(int id) {
    Registro7885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7885(Registro7885 r) {
    return r.valor + r.id;
}
