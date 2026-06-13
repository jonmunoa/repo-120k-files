// fichero 24333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24333;

Registro24333 crear_registro24333(int id) {
    Registro24333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24333(Registro24333 r) {
    return r.valor + r.id;
}
