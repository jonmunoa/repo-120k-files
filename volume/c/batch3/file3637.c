// fichero 3637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3637;

Registro3637 crear_registro3637(int id) {
    Registro3637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3637(Registro3637 r) {
    return r.valor + r.id;
}
