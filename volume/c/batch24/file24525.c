// fichero 24525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24525;

Registro24525 crear_registro24525(int id) {
    Registro24525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24525(Registro24525 r) {
    return r.valor + r.id;
}
