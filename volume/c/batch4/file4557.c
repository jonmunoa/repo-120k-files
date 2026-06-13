// fichero 4557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4557;

Registro4557 crear_registro4557(int id) {
    Registro4557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4557(Registro4557 r) {
    return r.valor + r.id;
}
