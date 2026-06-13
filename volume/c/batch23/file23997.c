// fichero 23997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23997;

Registro23997 crear_registro23997(int id) {
    Registro23997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23997(Registro23997 r) {
    return r.valor + r.id;
}
