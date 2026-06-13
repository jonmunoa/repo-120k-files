// fichero 2873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2873;

Registro2873 crear_registro2873(int id) {
    Registro2873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2873(Registro2873 r) {
    return r.valor + r.id;
}
