// fichero 45669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45669;

Registro45669 crear_registro45669(int id) {
    Registro45669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45669(Registro45669 r) {
    return r.valor + r.id;
}
