// fichero 21705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21705;

Registro21705 crear_registro21705(int id) {
    Registro21705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21705(Registro21705 r) {
    return r.valor + r.id;
}
