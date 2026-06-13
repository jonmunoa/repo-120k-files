// fichero 36933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36933;

Registro36933 crear_registro36933(int id) {
    Registro36933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36933(Registro36933 r) {
    return r.valor + r.id;
}
