// fichero 22889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22889;

Registro22889 crear_registro22889(int id) {
    Registro22889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22889(Registro22889 r) {
    return r.valor + r.id;
}
