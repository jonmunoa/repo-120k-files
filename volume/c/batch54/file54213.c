// fichero 54213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54213;

Registro54213 crear_registro54213(int id) {
    Registro54213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54213(Registro54213 r) {
    return r.valor + r.id;
}
