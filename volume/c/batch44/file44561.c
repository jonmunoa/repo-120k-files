// fichero 44561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44561;

Registro44561 crear_registro44561(int id) {
    Registro44561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44561(Registro44561 r) {
    return r.valor + r.id;
}
