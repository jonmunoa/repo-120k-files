// fichero 7641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7641;

Registro7641 crear_registro7641(int id) {
    Registro7641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7641(Registro7641 r) {
    return r.valor + r.id;
}
