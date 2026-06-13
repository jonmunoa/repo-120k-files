// fichero 38269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38269;

Registro38269 crear_registro38269(int id) {
    Registro38269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38269(Registro38269 r) {
    return r.valor + r.id;
}
