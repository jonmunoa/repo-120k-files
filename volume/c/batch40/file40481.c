// fichero 40481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40481;

Registro40481 crear_registro40481(int id) {
    Registro40481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40481(Registro40481 r) {
    return r.valor + r.id;
}
