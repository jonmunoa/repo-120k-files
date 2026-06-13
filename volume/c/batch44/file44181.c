// fichero 44181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44181;

Registro44181 crear_registro44181(int id) {
    Registro44181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44181(Registro44181 r) {
    return r.valor + r.id;
}
