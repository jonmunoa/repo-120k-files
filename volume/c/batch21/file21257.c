// fichero 21257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21257;

Registro21257 crear_registro21257(int id) {
    Registro21257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21257(Registro21257 r) {
    return r.valor + r.id;
}
