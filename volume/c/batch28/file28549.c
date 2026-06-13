// fichero 28549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28549;

Registro28549 crear_registro28549(int id) {
    Registro28549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28549(Registro28549 r) {
    return r.valor + r.id;
}
