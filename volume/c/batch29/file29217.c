// fichero 29217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29217;

Registro29217 crear_registro29217(int id) {
    Registro29217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29217(Registro29217 r) {
    return r.valor + r.id;
}
