// fichero 43713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43713;

Registro43713 crear_registro43713(int id) {
    Registro43713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43713(Registro43713 r) {
    return r.valor + r.id;
}
