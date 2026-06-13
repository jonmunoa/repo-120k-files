// fichero 5013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5013;

Registro5013 crear_registro5013(int id) {
    Registro5013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5013(Registro5013 r) {
    return r.valor + r.id;
}
