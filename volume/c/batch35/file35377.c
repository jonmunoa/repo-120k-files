// fichero 35377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35377;

Registro35377 crear_registro35377(int id) {
    Registro35377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35377(Registro35377 r) {
    return r.valor + r.id;
}
