// fichero 39801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39801;

Registro39801 crear_registro39801(int id) {
    Registro39801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39801(Registro39801 r) {
    return r.valor + r.id;
}
