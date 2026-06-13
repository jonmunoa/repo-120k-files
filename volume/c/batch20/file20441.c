// fichero 20441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20441;

Registro20441 crear_registro20441(int id) {
    Registro20441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20441(Registro20441 r) {
    return r.valor + r.id;
}
