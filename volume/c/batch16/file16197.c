// fichero 16197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16197;

Registro16197 crear_registro16197(int id) {
    Registro16197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16197(Registro16197 r) {
    return r.valor + r.id;
}
