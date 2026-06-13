// fichero 13541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13541;

Registro13541 crear_registro13541(int id) {
    Registro13541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13541(Registro13541 r) {
    return r.valor + r.id;
}
