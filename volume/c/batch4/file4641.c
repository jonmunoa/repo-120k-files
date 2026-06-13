// fichero 4641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4641;

Registro4641 crear_registro4641(int id) {
    Registro4641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4641(Registro4641 r) {
    return r.valor + r.id;
}
