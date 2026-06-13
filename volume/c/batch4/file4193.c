// fichero 4193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4193;

Registro4193 crear_registro4193(int id) {
    Registro4193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4193(Registro4193 r) {
    return r.valor + r.id;
}
