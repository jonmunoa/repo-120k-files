// fichero 1549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1549;

Registro1549 crear_registro1549(int id) {
    Registro1549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1549(Registro1549 r) {
    return r.valor + r.id;
}
