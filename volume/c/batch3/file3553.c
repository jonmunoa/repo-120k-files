// fichero 3553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3553;

Registro3553 crear_registro3553(int id) {
    Registro3553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3553(Registro3553 r) {
    return r.valor + r.id;
}
