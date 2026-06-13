// fichero 13161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13161;

Registro13161 crear_registro13161(int id) {
    Registro13161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13161(Registro13161 r) {
    return r.valor + r.id;
}
