// fichero 39921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39921;

Registro39921 crear_registro39921(int id) {
    Registro39921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39921(Registro39921 r) {
    return r.valor + r.id;
}
