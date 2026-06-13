// fichero 45873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45873;

Registro45873 crear_registro45873(int id) {
    Registro45873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45873(Registro45873 r) {
    return r.valor + r.id;
}
