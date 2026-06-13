// fichero 22637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22637;

Registro22637 crear_registro22637(int id) {
    Registro22637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22637(Registro22637 r) {
    return r.valor + r.id;
}
