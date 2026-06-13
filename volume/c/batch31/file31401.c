// fichero 31401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31401;

Registro31401 crear_registro31401(int id) {
    Registro31401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31401(Registro31401 r) {
    return r.valor + r.id;
}
