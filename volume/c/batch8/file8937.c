// fichero 8937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8937;

Registro8937 crear_registro8937(int id) {
    Registro8937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8937(Registro8937 r) {
    return r.valor + r.id;
}
