// fichero 24641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24641;

Registro24641 crear_registro24641(int id) {
    Registro24641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24641(Registro24641 r) {
    return r.valor + r.id;
}
