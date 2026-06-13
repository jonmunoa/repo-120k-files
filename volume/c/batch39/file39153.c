// fichero 39153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39153;

Registro39153 crear_registro39153(int id) {
    Registro39153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39153(Registro39153 r) {
    return r.valor + r.id;
}
