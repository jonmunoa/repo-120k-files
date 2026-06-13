// fichero 27481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27481;

Registro27481 crear_registro27481(int id) {
    Registro27481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27481(Registro27481 r) {
    return r.valor + r.id;
}
