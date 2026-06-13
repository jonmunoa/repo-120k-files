// fichero 49137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49137;

Registro49137 crear_registro49137(int id) {
    Registro49137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49137(Registro49137 r) {
    return r.valor + r.id;
}
