// fichero 8325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8325;

Registro8325 crear_registro8325(int id) {
    Registro8325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8325(Registro8325 r) {
    return r.valor + r.id;
}
