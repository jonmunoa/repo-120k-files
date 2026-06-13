// fichero 38637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38637;

Registro38637 crear_registro38637(int id) {
    Registro38637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38637(Registro38637 r) {
    return r.valor + r.id;
}
