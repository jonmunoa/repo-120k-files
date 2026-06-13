// fichero 48721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48721;

Registro48721 crear_registro48721(int id) {
    Registro48721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48721(Registro48721 r) {
    return r.valor + r.id;
}
