// fichero 36637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36637;

Registro36637 crear_registro36637(int id) {
    Registro36637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36637(Registro36637 r) {
    return r.valor + r.id;
}
