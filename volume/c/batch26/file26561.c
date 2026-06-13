// fichero 26561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26561;

Registro26561 crear_registro26561(int id) {
    Registro26561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26561(Registro26561 r) {
    return r.valor + r.id;
}
