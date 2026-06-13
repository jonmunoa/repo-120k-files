// fichero 3641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3641;

Registro3641 crear_registro3641(int id) {
    Registro3641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3641(Registro3641 r) {
    return r.valor + r.id;
}
