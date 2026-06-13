// fichero 31097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31097;

Registro31097 crear_registro31097(int id) {
    Registro31097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31097(Registro31097 r) {
    return r.valor + r.id;
}
