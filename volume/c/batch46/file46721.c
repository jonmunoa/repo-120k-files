// fichero 46721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46721;

Registro46721 crear_registro46721(int id) {
    Registro46721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46721(Registro46721 r) {
    return r.valor + r.id;
}
