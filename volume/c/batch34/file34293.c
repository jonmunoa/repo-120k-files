// fichero 34293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34293;

Registro34293 crear_registro34293(int id) {
    Registro34293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34293(Registro34293 r) {
    return r.valor + r.id;
}
