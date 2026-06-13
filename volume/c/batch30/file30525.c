// fichero 30525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30525;

Registro30525 crear_registro30525(int id) {
    Registro30525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30525(Registro30525 r) {
    return r.valor + r.id;
}
