// fichero 23653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23653;

Registro23653 crear_registro23653(int id) {
    Registro23653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23653(Registro23653 r) {
    return r.valor + r.id;
}
