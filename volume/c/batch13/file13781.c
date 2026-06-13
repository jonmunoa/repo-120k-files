// fichero 13781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13781;

Registro13781 crear_registro13781(int id) {
    Registro13781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13781(Registro13781 r) {
    return r.valor + r.id;
}
