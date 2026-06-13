// fichero 46213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46213;

Registro46213 crear_registro46213(int id) {
    Registro46213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46213(Registro46213 r) {
    return r.valor + r.id;
}
