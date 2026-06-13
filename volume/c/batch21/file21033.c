// fichero 21033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21033;

Registro21033 crear_registro21033(int id) {
    Registro21033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21033(Registro21033 r) {
    return r.valor + r.id;
}
