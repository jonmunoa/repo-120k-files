// fichero 18641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18641;

Registro18641 crear_registro18641(int id) {
    Registro18641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18641(Registro18641 r) {
    return r.valor + r.id;
}
