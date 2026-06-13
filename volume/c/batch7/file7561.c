// fichero 7561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7561;

Registro7561 crear_registro7561(int id) {
    Registro7561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7561(Registro7561 r) {
    return r.valor + r.id;
}
