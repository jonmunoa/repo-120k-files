// fichero 52005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52005;

Registro52005 crear_registro52005(int id) {
    Registro52005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52005(Registro52005 r) {
    return r.valor + r.id;
}
