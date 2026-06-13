// fichero 31005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31005;

Registro31005 crear_registro31005(int id) {
    Registro31005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31005(Registro31005 r) {
    return r.valor + r.id;
}
