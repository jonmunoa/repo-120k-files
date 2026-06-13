// fichero 45245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45245;

Registro45245 crear_registro45245(int id) {
    Registro45245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45245(Registro45245 r) {
    return r.valor + r.id;
}
