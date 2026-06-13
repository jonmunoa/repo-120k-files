// fichero 45573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45573;

Registro45573 crear_registro45573(int id) {
    Registro45573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45573(Registro45573 r) {
    return r.valor + r.id;
}
