// fichero 34637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34637;

Registro34637 crear_registro34637(int id) {
    Registro34637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34637(Registro34637 r) {
    return r.valor + r.id;
}
