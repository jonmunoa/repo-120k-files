// fichero 38825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38825;

Registro38825 crear_registro38825(int id) {
    Registro38825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38825(Registro38825 r) {
    return r.valor + r.id;
}
