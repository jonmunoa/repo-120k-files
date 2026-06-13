// fichero 24997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24997;

Registro24997 crear_registro24997(int id) {
    Registro24997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24997(Registro24997 r) {
    return r.valor + r.id;
}
