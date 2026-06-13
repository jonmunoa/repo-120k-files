// fichero 19293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19293;

Registro19293 crear_registro19293(int id) {
    Registro19293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19293(Registro19293 r) {
    return r.valor + r.id;
}
