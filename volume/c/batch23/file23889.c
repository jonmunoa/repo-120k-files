// fichero 23889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23889;

Registro23889 crear_registro23889(int id) {
    Registro23889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23889(Registro23889 r) {
    return r.valor + r.id;
}
