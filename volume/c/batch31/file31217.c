// fichero 31217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31217;

Registro31217 crear_registro31217(int id) {
    Registro31217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31217(Registro31217 r) {
    return r.valor + r.id;
}
