// fichero 11561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11561;

Registro11561 crear_registro11561(int id) {
    Registro11561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11561(Registro11561 r) {
    return r.valor + r.id;
}
