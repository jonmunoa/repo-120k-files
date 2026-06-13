// fichero 23229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23229;

Registro23229 crear_registro23229(int id) {
    Registro23229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23229(Registro23229 r) {
    return r.valor + r.id;
}
