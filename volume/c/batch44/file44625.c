// fichero 44625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44625;

Registro44625 crear_registro44625(int id) {
    Registro44625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44625(Registro44625 r) {
    return r.valor + r.id;
}
