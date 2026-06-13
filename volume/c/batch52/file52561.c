// fichero 52561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52561;

Registro52561 crear_registro52561(int id) {
    Registro52561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52561(Registro52561 r) {
    return r.valor + r.id;
}
