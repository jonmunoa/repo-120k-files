// fichero 4453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4453;

Registro4453 crear_registro4453(int id) {
    Registro4453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4453(Registro4453 r) {
    return r.valor + r.id;
}
