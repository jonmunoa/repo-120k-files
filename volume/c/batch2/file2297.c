// fichero 2297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2297;

Registro2297 crear_registro2297(int id) {
    Registro2297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2297(Registro2297 r) {
    return r.valor + r.id;
}
