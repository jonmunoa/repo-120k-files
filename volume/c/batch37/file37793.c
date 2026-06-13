// fichero 37793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37793;

Registro37793 crear_registro37793(int id) {
    Registro37793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37793(Registro37793 r) {
    return r.valor + r.id;
}
