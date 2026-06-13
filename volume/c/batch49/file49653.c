// fichero 49653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49653;

Registro49653 crear_registro49653(int id) {
    Registro49653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49653(Registro49653 r) {
    return r.valor + r.id;
}
