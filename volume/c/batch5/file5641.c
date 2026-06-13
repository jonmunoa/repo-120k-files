// fichero 5641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5641;

Registro5641 crear_registro5641(int id) {
    Registro5641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5641(Registro5641 r) {
    return r.valor + r.id;
}
