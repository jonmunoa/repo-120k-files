// fichero 7781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7781;

Registro7781 crear_registro7781(int id) {
    Registro7781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7781(Registro7781 r) {
    return r.valor + r.id;
}
