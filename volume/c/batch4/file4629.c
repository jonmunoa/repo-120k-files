// fichero 4629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4629;

Registro4629 crear_registro4629(int id) {
    Registro4629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4629(Registro4629 r) {
    return r.valor + r.id;
}
