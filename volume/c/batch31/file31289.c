// fichero 31289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31289;

Registro31289 crear_registro31289(int id) {
    Registro31289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31289(Registro31289 r) {
    return r.valor + r.id;
}
