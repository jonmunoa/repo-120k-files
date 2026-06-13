// fichero 9637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9637;

Registro9637 crear_registro9637(int id) {
    Registro9637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9637(Registro9637 r) {
    return r.valor + r.id;
}
