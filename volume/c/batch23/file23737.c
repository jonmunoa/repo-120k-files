// fichero 23737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23737;

Registro23737 crear_registro23737(int id) {
    Registro23737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23737(Registro23737 r) {
    return r.valor + r.id;
}
