// fichero 48693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48693;

Registro48693 crear_registro48693(int id) {
    Registro48693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48693(Registro48693 r) {
    return r.valor + r.id;
}
