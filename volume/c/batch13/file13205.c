// fichero 13205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13205;

Registro13205 crear_registro13205(int id) {
    Registro13205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13205(Registro13205 r) {
    return r.valor + r.id;
}
