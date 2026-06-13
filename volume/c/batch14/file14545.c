// fichero 14545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14545;

Registro14545 crear_registro14545(int id) {
    Registro14545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14545(Registro14545 r) {
    return r.valor + r.id;
}
