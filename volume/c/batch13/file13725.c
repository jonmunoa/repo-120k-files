// fichero 13725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13725;

Registro13725 crear_registro13725(int id) {
    Registro13725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13725(Registro13725 r) {
    return r.valor + r.id;
}
