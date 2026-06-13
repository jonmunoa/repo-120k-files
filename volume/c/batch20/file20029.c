// fichero 20029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20029;

Registro20029 crear_registro20029(int id) {
    Registro20029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20029(Registro20029 r) {
    return r.valor + r.id;
}
