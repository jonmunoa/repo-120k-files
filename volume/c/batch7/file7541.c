// fichero 7541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7541;

Registro7541 crear_registro7541(int id) {
    Registro7541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7541(Registro7541 r) {
    return r.valor + r.id;
}
