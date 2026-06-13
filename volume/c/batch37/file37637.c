// fichero 37637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37637;

Registro37637 crear_registro37637(int id) {
    Registro37637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37637(Registro37637 r) {
    return r.valor + r.id;
}
