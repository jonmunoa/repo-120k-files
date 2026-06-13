// fichero 23217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23217;

Registro23217 crear_registro23217(int id) {
    Registro23217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23217(Registro23217 r) {
    return r.valor + r.id;
}
