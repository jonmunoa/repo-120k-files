// fichero 44305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44305;

Registro44305 crear_registro44305(int id) {
    Registro44305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44305(Registro44305 r) {
    return r.valor + r.id;
}
