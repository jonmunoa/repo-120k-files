// fichero 31121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31121;

Registro31121 crear_registro31121(int id) {
    Registro31121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31121(Registro31121 r) {
    return r.valor + r.id;
}
