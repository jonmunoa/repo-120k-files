// fichero 39221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39221;

Registro39221 crear_registro39221(int id) {
    Registro39221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39221(Registro39221 r) {
    return r.valor + r.id;
}
