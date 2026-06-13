// fichero 31541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31541;

Registro31541 crear_registro31541(int id) {
    Registro31541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31541(Registro31541 r) {
    return r.valor + r.id;
}
