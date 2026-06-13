// fichero 5249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5249;

Registro5249 crear_registro5249(int id) {
    Registro5249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5249(Registro5249 r) {
    return r.valor + r.id;
}
