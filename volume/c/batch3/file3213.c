// fichero 3213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3213;

Registro3213 crear_registro3213(int id) {
    Registro3213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3213(Registro3213 r) {
    return r.valor + r.id;
}
