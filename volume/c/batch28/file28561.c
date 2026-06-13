// fichero 28561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28561;

Registro28561 crear_registro28561(int id) {
    Registro28561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28561(Registro28561 r) {
    return r.valor + r.id;
}
