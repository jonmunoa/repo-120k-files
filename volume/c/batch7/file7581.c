// fichero 7581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7581;

Registro7581 crear_registro7581(int id) {
    Registro7581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7581(Registro7581 r) {
    return r.valor + r.id;
}
