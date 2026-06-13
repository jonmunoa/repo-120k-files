// fichero 52217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52217;

Registro52217 crear_registro52217(int id) {
    Registro52217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52217(Registro52217 r) {
    return r.valor + r.id;
}
