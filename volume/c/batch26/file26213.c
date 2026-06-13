// fichero 26213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26213;

Registro26213 crear_registro26213(int id) {
    Registro26213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26213(Registro26213 r) {
    return r.valor + r.id;
}
