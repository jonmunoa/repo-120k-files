// fichero 937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro937;

Registro937 crear_registro937(int id) {
    Registro937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro937(Registro937 r) {
    return r.valor + r.id;
}
