// fichero 31393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31393;

Registro31393 crear_registro31393(int id) {
    Registro31393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31393(Registro31393 r) {
    return r.valor + r.id;
}
