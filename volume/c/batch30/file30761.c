// fichero 30761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30761;

Registro30761 crear_registro30761(int id) {
    Registro30761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30761(Registro30761 r) {
    return r.valor + r.id;
}
