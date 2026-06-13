// fichero 32573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32573;

Registro32573 crear_registro32573(int id) {
    Registro32573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32573(Registro32573 r) {
    return r.valor + r.id;
}
