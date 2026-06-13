// fichero 249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro249;

Registro249 crear_registro249(int id) {
    Registro249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro249(Registro249 r) {
    return r.valor + r.id;
}
