// fichero 35625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35625;

Registro35625 crear_registro35625(int id) {
    Registro35625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35625(Registro35625 r) {
    return r.valor + r.id;
}
