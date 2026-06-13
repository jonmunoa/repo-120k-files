// fichero 31245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31245;

Registro31245 crear_registro31245(int id) {
    Registro31245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31245(Registro31245 r) {
    return r.valor + r.id;
}
