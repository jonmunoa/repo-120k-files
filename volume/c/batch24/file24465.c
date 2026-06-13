// fichero 24465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24465;

Registro24465 crear_registro24465(int id) {
    Registro24465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24465(Registro24465 r) {
    return r.valor + r.id;
}
