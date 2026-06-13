// fichero 39213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39213;

Registro39213 crear_registro39213(int id) {
    Registro39213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39213(Registro39213 r) {
    return r.valor + r.id;
}
