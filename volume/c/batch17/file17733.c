// fichero 17733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17733;

Registro17733 crear_registro17733(int id) {
    Registro17733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17733(Registro17733 r) {
    return r.valor + r.id;
}
