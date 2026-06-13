// fichero 54153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54153;

Registro54153 crear_registro54153(int id) {
    Registro54153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54153(Registro54153 r) {
    return r.valor + r.id;
}
