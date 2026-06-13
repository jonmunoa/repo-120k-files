// fichero 14217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14217;

Registro14217 crear_registro14217(int id) {
    Registro14217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14217(Registro14217 r) {
    return r.valor + r.id;
}
