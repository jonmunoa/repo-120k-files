// fichero 23397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23397;

Registro23397 crear_registro23397(int id) {
    Registro23397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23397(Registro23397 r) {
    return r.valor + r.id;
}
