// fichero 51873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51873;

Registro51873 crear_registro51873(int id) {
    Registro51873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51873(Registro51873 r) {
    return r.valor + r.id;
}
