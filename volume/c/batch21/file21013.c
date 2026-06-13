// fichero 21013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21013;

Registro21013 crear_registro21013(int id) {
    Registro21013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21013(Registro21013 r) {
    return r.valor + r.id;
}
