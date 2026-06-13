// fichero 47081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47081;

Registro47081 crear_registro47081(int id) {
    Registro47081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47081(Registro47081 r) {
    return r.valor + r.id;
}
