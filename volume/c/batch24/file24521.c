// fichero 24521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24521;

Registro24521 crear_registro24521(int id) {
    Registro24521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24521(Registro24521 r) {
    return r.valor + r.id;
}
