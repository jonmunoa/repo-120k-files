// fichero 31549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31549;

Registro31549 crear_registro31549(int id) {
    Registro31549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31549(Registro31549 r) {
    return r.valor + r.id;
}
