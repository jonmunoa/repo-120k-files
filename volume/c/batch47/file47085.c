// fichero 47085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47085;

Registro47085 crear_registro47085(int id) {
    Registro47085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47085(Registro47085 r) {
    return r.valor + r.id;
}
