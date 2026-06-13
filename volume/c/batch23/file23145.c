// fichero 23145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23145;

Registro23145 crear_registro23145(int id) {
    Registro23145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23145(Registro23145 r) {
    return r.valor + r.id;
}
