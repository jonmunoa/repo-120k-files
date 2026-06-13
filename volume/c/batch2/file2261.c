// fichero 2261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2261;

Registro2261 crear_registro2261(int id) {
    Registro2261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2261(Registro2261 r) {
    return r.valor + r.id;
}
