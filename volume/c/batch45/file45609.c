// fichero 45609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45609;

Registro45609 crear_registro45609(int id) {
    Registro45609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45609(Registro45609 r) {
    return r.valor + r.id;
}
