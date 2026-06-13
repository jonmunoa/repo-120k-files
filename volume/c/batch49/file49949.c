// fichero 49949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49949;

Registro49949 crear_registro49949(int id) {
    Registro49949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49949(Registro49949 r) {
    return r.valor + r.id;
}
