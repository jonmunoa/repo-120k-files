// fichero 34933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34933;

Registro34933 crear_registro34933(int id) {
    Registro34933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34933(Registro34933 r) {
    return r.valor + r.id;
}
