// fichero 45649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45649;

Registro45649 crear_registro45649(int id) {
    Registro45649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45649(Registro45649 r) {
    return r.valor + r.id;
}
