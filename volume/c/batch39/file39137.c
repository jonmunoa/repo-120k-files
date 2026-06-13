// fichero 39137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39137;

Registro39137 crear_registro39137(int id) {
    Registro39137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39137(Registro39137 r) {
    return r.valor + r.id;
}
