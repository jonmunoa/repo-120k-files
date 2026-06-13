// fichero 45493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45493;

Registro45493 crear_registro45493(int id) {
    Registro45493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45493(Registro45493 r) {
    return r.valor + r.id;
}
