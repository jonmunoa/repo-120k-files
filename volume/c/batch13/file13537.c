// fichero 13537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13537;

Registro13537 crear_registro13537(int id) {
    Registro13537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13537(Registro13537 r) {
    return r.valor + r.id;
}
