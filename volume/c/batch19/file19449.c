// fichero 19449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19449;

Registro19449 crear_registro19449(int id) {
    Registro19449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19449(Registro19449 r) {
    return r.valor + r.id;
}
