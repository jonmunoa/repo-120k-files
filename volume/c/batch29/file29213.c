// fichero 29213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29213;

Registro29213 crear_registro29213(int id) {
    Registro29213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29213(Registro29213 r) {
    return r.valor + r.id;
}
