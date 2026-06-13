// fichero 17249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17249;

Registro17249 crear_registro17249(int id) {
    Registro17249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17249(Registro17249 r) {
    return r.valor + r.id;
}
