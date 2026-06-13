// fichero 39117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39117;

Registro39117 crear_registro39117(int id) {
    Registro39117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39117(Registro39117 r) {
    return r.valor + r.id;
}
