// fichero 38077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38077;

Registro38077 crear_registro38077(int id) {
    Registro38077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38077(Registro38077 r) {
    return r.valor + r.id;
}
