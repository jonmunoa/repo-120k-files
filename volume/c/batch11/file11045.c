// fichero 11045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11045;

Registro11045 crear_registro11045(int id) {
    Registro11045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11045(Registro11045 r) {
    return r.valor + r.id;
}
