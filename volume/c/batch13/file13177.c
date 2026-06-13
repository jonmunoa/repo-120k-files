// fichero 13177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13177;

Registro13177 crear_registro13177(int id) {
    Registro13177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13177(Registro13177 r) {
    return r.valor + r.id;
}
