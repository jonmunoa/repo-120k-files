// fichero 24133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24133;

Registro24133 crear_registro24133(int id) {
    Registro24133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24133(Registro24133 r) {
    return r.valor + r.id;
}
