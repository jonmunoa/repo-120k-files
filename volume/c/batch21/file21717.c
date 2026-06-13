// fichero 21717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21717;

Registro21717 crear_registro21717(int id) {
    Registro21717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21717(Registro21717 r) {
    return r.valor + r.id;
}
