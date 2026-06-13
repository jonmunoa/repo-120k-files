// fichero 4709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4709;

Registro4709 crear_registro4709(int id) {
    Registro4709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4709(Registro4709 r) {
    return r.valor + r.id;
}
