// fichero 18377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18377;

Registro18377 crear_registro18377(int id) {
    Registro18377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18377(Registro18377 r) {
    return r.valor + r.id;
}
