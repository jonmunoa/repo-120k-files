// fichero 46705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46705;

Registro46705 crear_registro46705(int id) {
    Registro46705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46705(Registro46705 r) {
    return r.valor + r.id;
}
