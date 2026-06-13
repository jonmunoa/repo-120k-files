// fichero 2373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2373;

Registro2373 crear_registro2373(int id) {
    Registro2373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2373(Registro2373 r) {
    return r.valor + r.id;
}
