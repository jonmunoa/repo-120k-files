// fichero 28989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28989;

Registro28989 crear_registro28989(int id) {
    Registro28989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28989(Registro28989 r) {
    return r.valor + r.id;
}
