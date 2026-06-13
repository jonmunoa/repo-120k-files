// fichero 4145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4145;

Registro4145 crear_registro4145(int id) {
    Registro4145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4145(Registro4145 r) {
    return r.valor + r.id;
}
