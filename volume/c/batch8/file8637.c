// fichero 8637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8637;

Registro8637 crear_registro8637(int id) {
    Registro8637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8637(Registro8637 r) {
    return r.valor + r.id;
}
