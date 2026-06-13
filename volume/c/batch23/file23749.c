// fichero 23749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23749;

Registro23749 crear_registro23749(int id) {
    Registro23749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23749(Registro23749 r) {
    return r.valor + r.id;
}
