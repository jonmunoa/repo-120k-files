// fichero 50801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50801;

Registro50801 crear_registro50801(int id) {
    Registro50801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50801(Registro50801 r) {
    return r.valor + r.id;
}
