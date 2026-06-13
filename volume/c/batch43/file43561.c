// fichero 43561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43561;

Registro43561 crear_registro43561(int id) {
    Registro43561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43561(Registro43561 r) {
    return r.valor + r.id;
}
