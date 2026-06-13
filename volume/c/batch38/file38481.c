// fichero 38481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38481;

Registro38481 crear_registro38481(int id) {
    Registro38481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38481(Registro38481 r) {
    return r.valor + r.id;
}
