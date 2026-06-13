// fichero 2641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2641;

Registro2641 crear_registro2641(int id) {
    Registro2641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2641(Registro2641 r) {
    return r.valor + r.id;
}
