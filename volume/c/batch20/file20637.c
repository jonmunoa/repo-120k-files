// fichero 20637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20637;

Registro20637 crear_registro20637(int id) {
    Registro20637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20637(Registro20637 r) {
    return r.valor + r.id;
}
