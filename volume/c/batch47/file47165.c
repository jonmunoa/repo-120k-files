// fichero 47165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47165;

Registro47165 crear_registro47165(int id) {
    Registro47165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47165(Registro47165 r) {
    return r.valor + r.id;
}
