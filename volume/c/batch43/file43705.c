// fichero 43705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43705;

Registro43705 crear_registro43705(int id) {
    Registro43705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43705(Registro43705 r) {
    return r.valor + r.id;
}
