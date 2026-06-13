// fichero 30445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30445;

Registro30445 crear_registro30445(int id) {
    Registro30445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30445(Registro30445 r) {
    return r.valor + r.id;
}
