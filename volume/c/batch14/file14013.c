// fichero 14013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14013;

Registro14013 crear_registro14013(int id) {
    Registro14013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14013(Registro14013 r) {
    return r.valor + r.id;
}
