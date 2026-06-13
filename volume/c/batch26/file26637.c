// fichero 26637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26637;

Registro26637 crear_registro26637(int id) {
    Registro26637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26637(Registro26637 r) {
    return r.valor + r.id;
}
