// fichero 46561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46561;

Registro46561 crear_registro46561(int id) {
    Registro46561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46561(Registro46561 r) {
    return r.valor + r.id;
}
