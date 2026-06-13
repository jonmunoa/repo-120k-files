// fichero 6061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6061;

Registro6061 crear_registro6061(int id) {
    Registro6061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6061(Registro6061 r) {
    return r.valor + r.id;
}
