// fichero 313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro313;

Registro313 crear_registro313(int id) {
    Registro313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro313(Registro313 r) {
    return r.valor + r.id;
}
