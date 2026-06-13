// fichero 46261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46261;

Registro46261 crear_registro46261(int id) {
    Registro46261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46261(Registro46261 r) {
    return r.valor + r.id;
}
