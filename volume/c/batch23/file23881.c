// fichero 23881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23881;

Registro23881 crear_registro23881(int id) {
    Registro23881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23881(Registro23881 r) {
    return r.valor + r.id;
}
