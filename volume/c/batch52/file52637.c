// fichero 52637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52637;

Registro52637 crear_registro52637(int id) {
    Registro52637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52637(Registro52637 r) {
    return r.valor + r.id;
}
