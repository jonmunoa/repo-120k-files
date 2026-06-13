// fichero 43637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43637;

Registro43637 crear_registro43637(int id) {
    Registro43637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43637(Registro43637 r) {
    return r.valor + r.id;
}
