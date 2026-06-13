// fichero 13877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13877;

Registro13877 crear_registro13877(int id) {
    Registro13877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13877(Registro13877 r) {
    return r.valor + r.id;
}
