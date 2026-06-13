// fichero 39033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39033;

Registro39033 crear_registro39033(int id) {
    Registro39033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39033(Registro39033 r) {
    return r.valor + r.id;
}
