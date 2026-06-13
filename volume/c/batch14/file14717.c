// fichero 14717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14717;

Registro14717 crear_registro14717(int id) {
    Registro14717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14717(Registro14717 r) {
    return r.valor + r.id;
}
