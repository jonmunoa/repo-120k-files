// fichero 27641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27641;

Registro27641 crear_registro27641(int id) {
    Registro27641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27641(Registro27641 r) {
    return r.valor + r.id;
}
