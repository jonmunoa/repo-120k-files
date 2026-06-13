// fichero 6589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6589;

Registro6589 crear_registro6589(int id) {
    Registro6589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6589(Registro6589 r) {
    return r.valor + r.id;
}
