// fichero 54313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54313;

Registro54313 crear_registro54313(int id) {
    Registro54313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54313(Registro54313 r) {
    return r.valor + r.id;
}
