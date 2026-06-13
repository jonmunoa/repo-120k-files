// fichero 30393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30393;

Registro30393 crear_registro30393(int id) {
    Registro30393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30393(Registro30393 r) {
    return r.valor + r.id;
}
