// fichero 49053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49053;

Registro49053 crear_registro49053(int id) {
    Registro49053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49053(Registro49053 r) {
    return r.valor + r.id;
}
