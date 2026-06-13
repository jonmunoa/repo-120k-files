// fichero 33637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33637;

Registro33637 crear_registro33637(int id) {
    Registro33637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33637(Registro33637 r) {
    return r.valor + r.id;
}
