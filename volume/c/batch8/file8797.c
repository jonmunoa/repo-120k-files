// fichero 8797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8797;

Registro8797 crear_registro8797(int id) {
    Registro8797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8797(Registro8797 r) {
    return r.valor + r.id;
}
