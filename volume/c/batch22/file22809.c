// fichero 22809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22809;

Registro22809 crear_registro22809(int id) {
    Registro22809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22809(Registro22809 r) {
    return r.valor + r.id;
}
