// fichero 13153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13153;

Registro13153 crear_registro13153(int id) {
    Registro13153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13153(Registro13153 r) {
    return r.valor + r.id;
}
