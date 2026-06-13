// fichero 54637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54637;

Registro54637 crear_registro54637(int id) {
    Registro54637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54637(Registro54637 r) {
    return r.valor + r.id;
}
