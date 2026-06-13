// fichero 50561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50561;

Registro50561 crear_registro50561(int id) {
    Registro50561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50561(Registro50561 r) {
    return r.valor + r.id;
}
