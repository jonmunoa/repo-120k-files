// fichero 27553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27553;

Registro27553 crear_registro27553(int id) {
    Registro27553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27553(Registro27553 r) {
    return r.valor + r.id;
}
