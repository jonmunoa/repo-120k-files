// fichero 25637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25637;

Registro25637 crear_registro25637(int id) {
    Registro25637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25637(Registro25637 r) {
    return r.valor + r.id;
}
