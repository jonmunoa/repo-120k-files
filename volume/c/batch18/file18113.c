// fichero 18113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18113;

Registro18113 crear_registro18113(int id) {
    Registro18113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18113(Registro18113 r) {
    return r.valor + r.id;
}
