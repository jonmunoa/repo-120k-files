// fichero 38185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38185;

Registro38185 crear_registro38185(int id) {
    Registro38185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38185(Registro38185 r) {
    return r.valor + r.id;
}
