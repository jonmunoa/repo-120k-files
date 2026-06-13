// fichero 23945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23945;

Registro23945 crear_registro23945(int id) {
    Registro23945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23945(Registro23945 r) {
    return r.valor + r.id;
}
