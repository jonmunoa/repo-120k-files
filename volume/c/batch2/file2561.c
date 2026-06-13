// fichero 2561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2561;

Registro2561 crear_registro2561(int id) {
    Registro2561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2561(Registro2561 r) {
    return r.valor + r.id;
}
