// fichero 17441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17441;

Registro17441 crear_registro17441(int id) {
    Registro17441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17441(Registro17441 r) {
    return r.valor + r.id;
}
