// fichero 24953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24953;

Registro24953 crear_registro24953(int id) {
    Registro24953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24953(Registro24953 r) {
    return r.valor + r.id;
}
