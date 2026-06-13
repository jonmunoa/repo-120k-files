// fichero 44201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44201;

Registro44201 crear_registro44201(int id) {
    Registro44201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44201(Registro44201 r) {
    return r.valor + r.id;
}
