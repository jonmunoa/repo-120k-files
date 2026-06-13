// fichero 48549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48549;

Registro48549 crear_registro48549(int id) {
    Registro48549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48549(Registro48549 r) {
    return r.valor + r.id;
}
