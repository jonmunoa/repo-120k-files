// fichero 23509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23509;

Registro23509 crear_registro23509(int id) {
    Registro23509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23509(Registro23509 r) {
    return r.valor + r.id;
}
