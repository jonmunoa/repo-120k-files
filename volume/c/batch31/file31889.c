// fichero 31889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31889;

Registro31889 crear_registro31889(int id) {
    Registro31889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31889(Registro31889 r) {
    return r.valor + r.id;
}
