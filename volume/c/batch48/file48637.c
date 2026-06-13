// fichero 48637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48637;

Registro48637 crear_registro48637(int id) {
    Registro48637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48637(Registro48637 r) {
    return r.valor + r.id;
}
