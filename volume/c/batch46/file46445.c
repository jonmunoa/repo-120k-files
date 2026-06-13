// fichero 46445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46445;

Registro46445 crear_registro46445(int id) {
    Registro46445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46445(Registro46445 r) {
    return r.valor + r.id;
}
