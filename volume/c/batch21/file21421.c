// fichero 21421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21421;

Registro21421 crear_registro21421(int id) {
    Registro21421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21421(Registro21421 r) {
    return r.valor + r.id;
}
