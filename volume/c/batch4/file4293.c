// fichero 4293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4293;

Registro4293 crear_registro4293(int id) {
    Registro4293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4293(Registro4293 r) {
    return r.valor + r.id;
}
