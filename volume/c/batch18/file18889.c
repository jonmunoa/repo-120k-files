// fichero 18889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18889;

Registro18889 crear_registro18889(int id) {
    Registro18889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18889(Registro18889 r) {
    return r.valor + r.id;
}
