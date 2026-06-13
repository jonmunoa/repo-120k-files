// fichero 12597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12597;

Registro12597 crear_registro12597(int id) {
    Registro12597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12597(Registro12597 r) {
    return r.valor + r.id;
}
