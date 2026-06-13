// fichero 38125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38125;

Registro38125 crear_registro38125(int id) {
    Registro38125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38125(Registro38125 r) {
    return r.valor + r.id;
}
