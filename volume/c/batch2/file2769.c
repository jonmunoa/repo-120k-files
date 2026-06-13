// fichero 2769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2769;

Registro2769 crear_registro2769(int id) {
    Registro2769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2769(Registro2769 r) {
    return r.valor + r.id;
}
