// fichero 41933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41933;

Registro41933 crear_registro41933(int id) {
    Registro41933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41933(Registro41933 r) {
    return r.valor + r.id;
}
