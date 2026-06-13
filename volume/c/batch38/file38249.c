// fichero 38249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38249;

Registro38249 crear_registro38249(int id) {
    Registro38249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38249(Registro38249 r) {
    return r.valor + r.id;
}
