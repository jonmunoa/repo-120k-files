// fichero 13637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13637;

Registro13637 crear_registro13637(int id) {
    Registro13637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13637(Registro13637 r) {
    return r.valor + r.id;
}
