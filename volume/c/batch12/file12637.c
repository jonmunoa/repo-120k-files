// fichero 12637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12637;

Registro12637 crear_registro12637(int id) {
    Registro12637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12637(Registro12637 r) {
    return r.valor + r.id;
}
