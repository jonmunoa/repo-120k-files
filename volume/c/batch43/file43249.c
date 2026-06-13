// fichero 43249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43249;

Registro43249 crear_registro43249(int id) {
    Registro43249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43249(Registro43249 r) {
    return r.valor + r.id;
}
