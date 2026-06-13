// fichero 6637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6637;

Registro6637 crear_registro6637(int id) {
    Registro6637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6637(Registro6637 r) {
    return r.valor + r.id;
}
