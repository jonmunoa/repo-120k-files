// fichero 27637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27637;

Registro27637 crear_registro27637(int id) {
    Registro27637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27637(Registro27637 r) {
    return r.valor + r.id;
}
