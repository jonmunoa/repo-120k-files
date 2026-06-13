// fichero 2249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2249;

Registro2249 crear_registro2249(int id) {
    Registro2249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2249(Registro2249 r) {
    return r.valor + r.id;
}
