// fichero 43393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43393;

Registro43393 crear_registro43393(int id) {
    Registro43393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43393(Registro43393 r) {
    return r.valor + r.id;
}
