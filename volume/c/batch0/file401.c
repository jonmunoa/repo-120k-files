// fichero 401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro401;

Registro401 crear_registro401(int id) {
    Registro401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro401(Registro401 r) {
    return r.valor + r.id;
}
