// fichero 1721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1721;

Registro1721 crear_registro1721(int id) {
    Registro1721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1721(Registro1721 r) {
    return r.valor + r.id;
}
