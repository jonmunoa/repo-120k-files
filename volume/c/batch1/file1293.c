// fichero 1293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1293;

Registro1293 crear_registro1293(int id) {
    Registro1293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1293(Registro1293 r) {
    return r.valor + r.id;
}
