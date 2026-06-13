// fichero 43581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43581;

Registro43581 crear_registro43581(int id) {
    Registro43581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43581(Registro43581 r) {
    return r.valor + r.id;
}
