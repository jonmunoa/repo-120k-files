// fichero 30797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30797;

Registro30797 crear_registro30797(int id) {
    Registro30797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30797(Registro30797 r) {
    return r.valor + r.id;
}
