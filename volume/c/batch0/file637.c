// fichero 637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro637;

Registro637 crear_registro637(int id) {
    Registro637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro637(Registro637 r) {
    return r.valor + r.id;
}
