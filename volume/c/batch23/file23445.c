// fichero 23445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23445;

Registro23445 crear_registro23445(int id) {
    Registro23445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23445(Registro23445 r) {
    return r.valor + r.id;
}
