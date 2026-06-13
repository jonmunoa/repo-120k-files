// fichero 54669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54669;

Registro54669 crear_registro54669(int id) {
    Registro54669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54669(Registro54669 r) {
    return r.valor + r.id;
}
