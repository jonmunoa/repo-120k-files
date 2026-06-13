// fichero 6305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6305;

Registro6305 crear_registro6305(int id) {
    Registro6305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6305(Registro6305 r) {
    return r.valor + r.id;
}
