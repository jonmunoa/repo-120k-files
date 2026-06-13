// fichero 17541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17541;

Registro17541 crear_registro17541(int id) {
    Registro17541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17541(Registro17541 r) {
    return r.valor + r.id;
}
