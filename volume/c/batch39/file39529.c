// fichero 39529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39529;

Registro39529 crear_registro39529(int id) {
    Registro39529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39529(Registro39529 r) {
    return r.valor + r.id;
}
