// fichero 21237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21237;

Registro21237 crear_registro21237(int id) {
    Registro21237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21237(Registro21237 r) {
    return r.valor + r.id;
}
