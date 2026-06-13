// fichero 31597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31597;

Registro31597 crear_registro31597(int id) {
    Registro31597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31597(Registro31597 r) {
    return r.valor + r.id;
}
