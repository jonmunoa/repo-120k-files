// fichero 13717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13717;

Registro13717 crear_registro13717(int id) {
    Registro13717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13717(Registro13717 r) {
    return r.valor + r.id;
}
