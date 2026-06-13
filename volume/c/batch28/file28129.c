// fichero 28129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28129;

Registro28129 crear_registro28129(int id) {
    Registro28129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28129(Registro28129 r) {
    return r.valor + r.id;
}
