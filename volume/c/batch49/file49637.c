// fichero 49637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49637;

Registro49637 crear_registro49637(int id) {
    Registro49637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49637(Registro49637 r) {
    return r.valor + r.id;
}
