// fichero 3937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3937;

Registro3937 crear_registro3937(int id) {
    Registro3937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3937(Registro3937 r) {
    return r.valor + r.id;
}
