// fichero 31437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31437;

Registro31437 crear_registro31437(int id) {
    Registro31437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31437(Registro31437 r) {
    return r.valor + r.id;
}
