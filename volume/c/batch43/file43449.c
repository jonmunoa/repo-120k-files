// fichero 43449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43449;

Registro43449 crear_registro43449(int id) {
    Registro43449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43449(Registro43449 r) {
    return r.valor + r.id;
}
