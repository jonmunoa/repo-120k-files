// fichero 46709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46709;

Registro46709 crear_registro46709(int id) {
    Registro46709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46709(Registro46709 r) {
    return r.valor + r.id;
}
