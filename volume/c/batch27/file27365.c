// fichero 27365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27365;

Registro27365 crear_registro27365(int id) {
    Registro27365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27365(Registro27365 r) {
    return r.valor + r.id;
}
