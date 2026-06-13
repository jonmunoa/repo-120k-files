// fichero 31189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31189;

Registro31189 crear_registro31189(int id) {
    Registro31189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31189(Registro31189 r) {
    return r.valor + r.id;
}
