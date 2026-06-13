// fichero 18073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18073;

Registro18073 crear_registro18073(int id) {
    Registro18073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18073(Registro18073 r) {
    return r.valor + r.id;
}
