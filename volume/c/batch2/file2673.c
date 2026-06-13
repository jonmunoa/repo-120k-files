// fichero 2673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2673;

Registro2673 crear_registro2673(int id) {
    Registro2673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2673(Registro2673 r) {
    return r.valor + r.id;
}
