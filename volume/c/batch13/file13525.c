// fichero 13525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13525;

Registro13525 crear_registro13525(int id) {
    Registro13525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13525(Registro13525 r) {
    return r.valor + r.id;
}
