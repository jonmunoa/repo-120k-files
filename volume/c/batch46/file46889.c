// fichero 46889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46889;

Registro46889 crear_registro46889(int id) {
    Registro46889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46889(Registro46889 r) {
    return r.valor + r.id;
}
