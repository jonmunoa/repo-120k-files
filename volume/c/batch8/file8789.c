// fichero 8789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8789;

Registro8789 crear_registro8789(int id) {
    Registro8789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8789(Registro8789 r) {
    return r.valor + r.id;
}
