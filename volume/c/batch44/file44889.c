// fichero 44889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44889;

Registro44889 crear_registro44889(int id) {
    Registro44889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44889(Registro44889 r) {
    return r.valor + r.id;
}
