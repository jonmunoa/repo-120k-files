// fichero 47641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47641;

Registro47641 crear_registro47641(int id) {
    Registro47641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47641(Registro47641 r) {
    return r.valor + r.id;
}
