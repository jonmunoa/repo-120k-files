// fichero 20561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20561;

Registro20561 crear_registro20561(int id) {
    Registro20561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20561(Registro20561 r) {
    return r.valor + r.id;
}
