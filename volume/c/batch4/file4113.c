// fichero 4113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4113;

Registro4113 crear_registro4113(int id) {
    Registro4113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4113(Registro4113 r) {
    return r.valor + r.id;
}
