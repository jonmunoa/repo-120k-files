// fichero 46769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46769;

Registro46769 crear_registro46769(int id) {
    Registro46769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46769(Registro46769 r) {
    return r.valor + r.id;
}
