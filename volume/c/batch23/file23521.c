// fichero 23521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23521;

Registro23521 crear_registro23521(int id) {
    Registro23521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23521(Registro23521 r) {
    return r.valor + r.id;
}
