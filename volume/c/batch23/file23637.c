// fichero 23637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23637;

Registro23637 crear_registro23637(int id) {
    Registro23637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23637(Registro23637 r) {
    return r.valor + r.id;
}
