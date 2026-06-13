// fichero 40441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40441;

Registro40441 crear_registro40441(int id) {
    Registro40441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40441(Registro40441 r) {
    return r.valor + r.id;
}
