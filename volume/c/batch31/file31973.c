// fichero 31973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31973;

Registro31973 crear_registro31973(int id) {
    Registro31973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31973(Registro31973 r) {
    return r.valor + r.id;
}
