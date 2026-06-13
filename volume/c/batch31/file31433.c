// fichero 31433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31433;

Registro31433 crear_registro31433(int id) {
    Registro31433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31433(Registro31433 r) {
    return r.valor + r.id;
}
