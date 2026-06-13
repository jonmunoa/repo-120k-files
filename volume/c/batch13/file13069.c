// fichero 13069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13069;

Registro13069 crear_registro13069(int id) {
    Registro13069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13069(Registro13069 r) {
    return r.valor + r.id;
}
