// fichero 43085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43085;

Registro43085 crear_registro43085(int id) {
    Registro43085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43085(Registro43085 r) {
    return r.valor + r.id;
}
