// fichero 3441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3441;

Registro3441 crear_registro3441(int id) {
    Registro3441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3441(Registro3441 r) {
    return r.valor + r.id;
}
