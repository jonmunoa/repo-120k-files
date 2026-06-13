// fichero 46117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46117;

Registro46117 crear_registro46117(int id) {
    Registro46117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46117(Registro46117 r) {
    return r.valor + r.id;
}
