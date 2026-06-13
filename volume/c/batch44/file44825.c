// fichero 44825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44825;

Registro44825 crear_registro44825(int id) {
    Registro44825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44825(Registro44825 r) {
    return r.valor + r.id;
}
