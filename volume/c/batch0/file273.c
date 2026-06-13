// fichero 273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro273;

Registro273 crear_registro273(int id) {
    Registro273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro273(Registro273 r) {
    return r.valor + r.id;
}
