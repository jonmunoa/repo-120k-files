// fichero 23169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23169;

Registro23169 crear_registro23169(int id) {
    Registro23169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23169(Registro23169 r) {
    return r.valor + r.id;
}
