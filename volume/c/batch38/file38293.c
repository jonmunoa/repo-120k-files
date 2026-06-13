// fichero 38293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38293;

Registro38293 crear_registro38293(int id) {
    Registro38293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38293(Registro38293 r) {
    return r.valor + r.id;
}
