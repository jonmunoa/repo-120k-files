// fichero 27093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27093;

Registro27093 crear_registro27093(int id) {
    Registro27093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27093(Registro27093 r) {
    return r.valor + r.id;
}
