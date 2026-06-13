// fichero 31645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31645;

Registro31645 crear_registro31645(int id) {
    Registro31645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31645(Registro31645 r) {
    return r.valor + r.id;
}
