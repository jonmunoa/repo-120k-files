// fichero 39885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39885;

Registro39885 crear_registro39885(int id) {
    Registro39885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39885(Registro39885 r) {
    return r.valor + r.id;
}
