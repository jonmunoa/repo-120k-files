// fichero 43313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43313;

Registro43313 crear_registro43313(int id) {
    Registro43313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43313(Registro43313 r) {
    return r.valor + r.id;
}
