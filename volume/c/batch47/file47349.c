// fichero 47349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47349;

Registro47349 crear_registro47349(int id) {
    Registro47349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47349(Registro47349 r) {
    return r.valor + r.id;
}
