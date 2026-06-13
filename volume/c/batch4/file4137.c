// fichero 4137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4137;

Registro4137 crear_registro4137(int id) {
    Registro4137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4137(Registro4137 r) {
    return r.valor + r.id;
}
