// fichero 47637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47637;

Registro47637 crear_registro47637(int id) {
    Registro47637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47637(Registro47637 r) {
    return r.valor + r.id;
}
