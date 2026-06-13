// fichero 21441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21441;

Registro21441 crear_registro21441(int id) {
    Registro21441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21441(Registro21441 r) {
    return r.valor + r.id;
}
