// fichero 28637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28637;

Registro28637 crear_registro28637(int id) {
    Registro28637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28637(Registro28637 r) {
    return r.valor + r.id;
}
