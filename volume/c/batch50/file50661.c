// fichero 50661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50661;

Registro50661 crear_registro50661(int id) {
    Registro50661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50661(Registro50661 r) {
    return r.valor + r.id;
}
