// fichero 21245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21245;

Registro21245 crear_registro21245(int id) {
    Registro21245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21245(Registro21245 r) {
    return r.valor + r.id;
}
