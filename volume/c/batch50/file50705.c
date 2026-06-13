// fichero 50705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50705;

Registro50705 crear_registro50705(int id) {
    Registro50705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50705(Registro50705 r) {
    return r.valor + r.id;
}
