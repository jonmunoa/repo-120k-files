// fichero 33309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33309;

Registro33309 crear_registro33309(int id) {
    Registro33309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33309(Registro33309 r) {
    return r.valor + r.id;
}
