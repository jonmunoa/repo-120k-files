// fichero 31045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31045;

Registro31045 crear_registro31045(int id) {
    Registro31045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31045(Registro31045 r) {
    return r.valor + r.id;
}
