// fichero 17013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17013;

Registro17013 crear_registro17013(int id) {
    Registro17013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17013(Registro17013 r) {
    return r.valor + r.id;
}
