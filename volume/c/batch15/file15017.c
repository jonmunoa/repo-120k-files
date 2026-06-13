// fichero 15017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15017;

Registro15017 crear_registro15017(int id) {
    Registro15017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15017(Registro15017 r) {
    return r.valor + r.id;
}
