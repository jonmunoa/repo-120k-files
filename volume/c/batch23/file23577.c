// fichero 23577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23577;

Registro23577 crear_registro23577(int id) {
    Registro23577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23577(Registro23577 r) {
    return r.valor + r.id;
}
