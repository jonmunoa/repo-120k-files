// fichero 31297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31297;

Registro31297 crear_registro31297(int id) {
    Registro31297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31297(Registro31297 r) {
    return r.valor + r.id;
}
