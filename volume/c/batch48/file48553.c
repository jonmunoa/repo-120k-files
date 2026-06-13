// fichero 48553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48553;

Registro48553 crear_registro48553(int id) {
    Registro48553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48553(Registro48553 r) {
    return r.valor + r.id;
}
