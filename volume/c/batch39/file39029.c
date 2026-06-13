// fichero 39029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39029;

Registro39029 crear_registro39029(int id) {
    Registro39029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39029(Registro39029 r) {
    return r.valor + r.id;
}
