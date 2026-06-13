// fichero 43873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43873;

Registro43873 crear_registro43873(int id) {
    Registro43873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43873(Registro43873 r) {
    return r.valor + r.id;
}
