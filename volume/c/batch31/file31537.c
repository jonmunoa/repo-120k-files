// fichero 31537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31537;

Registro31537 crear_registro31537(int id) {
    Registro31537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31537(Registro31537 r) {
    return r.valor + r.id;
}
