// fichero 30273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30273;

Registro30273 crear_registro30273(int id) {
    Registro30273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30273(Registro30273 r) {
    return r.valor + r.id;
}
