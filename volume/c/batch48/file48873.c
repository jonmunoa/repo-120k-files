// fichero 48873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48873;

Registro48873 crear_registro48873(int id) {
    Registro48873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48873(Registro48873 r) {
    return r.valor + r.id;
}
