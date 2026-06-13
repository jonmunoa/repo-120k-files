// fichero 30281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30281;

Registro30281 crear_registro30281(int id) {
    Registro30281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30281(Registro30281 r) {
    return r.valor + r.id;
}
