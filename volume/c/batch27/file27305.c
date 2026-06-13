// fichero 27305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27305;

Registro27305 crear_registro27305(int id) {
    Registro27305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27305(Registro27305 r) {
    return r.valor + r.id;
}
