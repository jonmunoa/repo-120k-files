// fichero 4865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4865;

Registro4865 crear_registro4865(int id) {
    Registro4865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4865(Registro4865 r) {
    return r.valor + r.id;
}
