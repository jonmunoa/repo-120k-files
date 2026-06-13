// fichero 45637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45637;

Registro45637 crear_registro45637(int id) {
    Registro45637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45637(Registro45637 r) {
    return r.valor + r.id;
}
