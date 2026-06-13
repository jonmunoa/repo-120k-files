// fichero 14637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14637;

Registro14637 crear_registro14637(int id) {
    Registro14637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14637(Registro14637 r) {
    return r.valor + r.id;
}
