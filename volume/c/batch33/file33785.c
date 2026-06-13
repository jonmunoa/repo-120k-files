// fichero 33785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33785;

Registro33785 crear_registro33785(int id) {
    Registro33785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33785(Registro33785 r) {
    return r.valor + r.id;
}
