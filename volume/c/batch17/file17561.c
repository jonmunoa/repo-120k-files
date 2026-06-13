// fichero 17561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17561;

Registro17561 crear_registro17561(int id) {
    Registro17561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17561(Registro17561 r) {
    return r.valor + r.id;
}
