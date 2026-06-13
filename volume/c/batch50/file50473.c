// fichero 50473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50473;

Registro50473 crear_registro50473(int id) {
    Registro50473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50473(Registro50473 r) {
    return r.valor + r.id;
}
