// fichero 16637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16637;

Registro16637 crear_registro16637(int id) {
    Registro16637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16637(Registro16637 r) {
    return r.valor + r.id;
}
