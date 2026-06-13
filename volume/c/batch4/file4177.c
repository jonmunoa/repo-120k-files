// fichero 4177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4177;

Registro4177 crear_registro4177(int id) {
    Registro4177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4177(Registro4177 r) {
    return r.valor + r.id;
}
