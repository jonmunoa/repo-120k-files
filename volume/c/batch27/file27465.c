// fichero 27465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27465;

Registro27465 crear_registro27465(int id) {
    Registro27465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27465(Registro27465 r) {
    return r.valor + r.id;
}
