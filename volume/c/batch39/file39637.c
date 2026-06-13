// fichero 39637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39637;

Registro39637 crear_registro39637(int id) {
    Registro39637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39637(Registro39637 r) {
    return r.valor + r.id;
}
