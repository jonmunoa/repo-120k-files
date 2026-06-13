// fichero 15637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15637;

Registro15637 crear_registro15637(int id) {
    Registro15637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15637(Registro15637 r) {
    return r.valor + r.id;
}
