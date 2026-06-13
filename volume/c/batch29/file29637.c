// fichero 29637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29637;

Registro29637 crear_registro29637(int id) {
    Registro29637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29637(Registro29637 r) {
    return r.valor + r.id;
}
