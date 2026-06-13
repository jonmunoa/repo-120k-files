// fichero 2233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2233;

Registro2233 crear_registro2233(int id) {
    Registro2233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2233(Registro2233 r) {
    return r.valor + r.id;
}
