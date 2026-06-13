// fichero 19249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19249;

Registro19249 crear_registro19249(int id) {
    Registro19249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19249(Registro19249 r) {
    return r.valor + r.id;
}
