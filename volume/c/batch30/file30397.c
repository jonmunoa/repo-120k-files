// fichero 30397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30397;

Registro30397 crear_registro30397(int id) {
    Registro30397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30397(Registro30397 r) {
    return r.valor + r.id;
}
