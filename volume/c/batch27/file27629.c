// fichero 27629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27629;

Registro27629 crear_registro27629(int id) {
    Registro27629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27629(Registro27629 r) {
    return r.valor + r.id;
}
