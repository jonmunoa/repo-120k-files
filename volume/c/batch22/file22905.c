// fichero 22905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22905;

Registro22905 crear_registro22905(int id) {
    Registro22905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22905(Registro22905 r) {
    return r.valor + r.id;
}
