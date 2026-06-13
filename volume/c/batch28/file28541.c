// fichero 28541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28541;

Registro28541 crear_registro28541(int id) {
    Registro28541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28541(Registro28541 r) {
    return r.valor + r.id;
}
