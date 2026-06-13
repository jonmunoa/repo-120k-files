// fichero 45381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45381;

Registro45381 crear_registro45381(int id) {
    Registro45381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45381(Registro45381 r) {
    return r.valor + r.id;
}
