// fichero 24989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24989;

Registro24989 crear_registro24989(int id) {
    Registro24989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24989(Registro24989 r) {
    return r.valor + r.id;
}
