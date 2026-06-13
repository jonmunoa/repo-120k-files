// fichero 15757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15757;

Registro15757 crear_registro15757(int id) {
    Registro15757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15757(Registro15757 r) {
    return r.valor + r.id;
}
