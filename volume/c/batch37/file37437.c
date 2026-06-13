// fichero 37437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37437;

Registro37437 crear_registro37437(int id) {
    Registro37437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37437(Registro37437 r) {
    return r.valor + r.id;
}
