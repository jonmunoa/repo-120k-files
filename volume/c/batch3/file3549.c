// fichero 3549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3549;

Registro3549 crear_registro3549(int id) {
    Registro3549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3549(Registro3549 r) {
    return r.valor + r.id;
}
