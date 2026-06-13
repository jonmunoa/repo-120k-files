// fichero 1373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1373;

Registro1373 crear_registro1373(int id) {
    Registro1373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1373(Registro1373 r) {
    return r.valor + r.id;
}
