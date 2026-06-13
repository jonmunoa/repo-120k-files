// fichero 24853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24853;

Registro24853 crear_registro24853(int id) {
    Registro24853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24853(Registro24853 r) {
    return r.valor + r.id;
}
