// fichero 31621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31621;

Registro31621 crear_registro31621(int id) {
    Registro31621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31621(Registro31621 r) {
    return r.valor + r.id;
}
