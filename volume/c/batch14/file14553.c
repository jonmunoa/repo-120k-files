// fichero 14553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14553;

Registro14553 crear_registro14553(int id) {
    Registro14553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14553(Registro14553 r) {
    return r.valor + r.id;
}
