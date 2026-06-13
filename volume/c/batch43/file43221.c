// fichero 43221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43221;

Registro43221 crear_registro43221(int id) {
    Registro43221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43221(Registro43221 r) {
    return r.valor + r.id;
}
