// fichero 21393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21393;

Registro21393 crear_registro21393(int id) {
    Registro21393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21393(Registro21393 r) {
    return r.valor + r.id;
}
