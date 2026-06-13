// fichero 3933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3933;

Registro3933 crear_registro3933(int id) {
    Registro3933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3933(Registro3933 r) {
    return r.valor + r.id;
}
