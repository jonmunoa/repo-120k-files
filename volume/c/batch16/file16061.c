// fichero 16061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16061;

Registro16061 crear_registro16061(int id) {
    Registro16061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16061(Registro16061 r) {
    return r.valor + r.id;
}
