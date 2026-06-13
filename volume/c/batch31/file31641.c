// fichero 31641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31641;

Registro31641 crear_registro31641(int id) {
    Registro31641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31641(Registro31641 r) {
    return r.valor + r.id;
}
