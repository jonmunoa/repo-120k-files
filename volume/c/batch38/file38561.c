// fichero 38561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38561;

Registro38561 crear_registro38561(int id) {
    Registro38561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38561(Registro38561 r) {
    return r.valor + r.id;
}
