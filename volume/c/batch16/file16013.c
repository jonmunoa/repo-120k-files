// fichero 16013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16013;

Registro16013 crear_registro16013(int id) {
    Registro16013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16013(Registro16013 r) {
    return r.valor + r.id;
}
