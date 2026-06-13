// fichero 12313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12313;

Registro12313 crear_registro12313(int id) {
    Registro12313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12313(Registro12313 r) {
    return r.valor + r.id;
}
