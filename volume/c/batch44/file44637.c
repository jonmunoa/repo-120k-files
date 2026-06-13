// fichero 44637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44637;

Registro44637 crear_registro44637(int id) {
    Registro44637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44637(Registro44637 r) {
    return r.valor + r.id;
}
