// fichero 2313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2313;

Registro2313 crear_registro2313(int id) {
    Registro2313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2313(Registro2313 r) {
    return r.valor + r.id;
}
