// fichero 24921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24921;

Registro24921 crear_registro24921(int id) {
    Registro24921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24921(Registro24921 r) {
    return r.valor + r.id;
}
