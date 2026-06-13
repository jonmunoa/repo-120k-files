// fichero 31477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31477;

Registro31477 crear_registro31477(int id) {
    Registro31477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31477(Registro31477 r) {
    return r.valor + r.id;
}
