// fichero 34441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34441;

Registro34441 crear_registro34441(int id) {
    Registro34441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34441(Registro34441 r) {
    return r.valor + r.id;
}
