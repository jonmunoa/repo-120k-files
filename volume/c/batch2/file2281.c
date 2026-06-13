// fichero 2281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2281;

Registro2281 crear_registro2281(int id) {
    Registro2281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2281(Registro2281 r) {
    return r.valor + r.id;
}
