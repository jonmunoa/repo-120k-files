// fichero 16057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16057;

Registro16057 crear_registro16057(int id) {
    Registro16057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16057(Registro16057 r) {
    return r.valor + r.id;
}
