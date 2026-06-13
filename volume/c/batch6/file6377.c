// fichero 6377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6377;

Registro6377 crear_registro6377(int id) {
    Registro6377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6377(Registro6377 r) {
    return r.valor + r.id;
}
