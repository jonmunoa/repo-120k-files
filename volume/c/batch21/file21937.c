// fichero 21937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21937;

Registro21937 crear_registro21937(int id) {
    Registro21937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21937(Registro21937 r) {
    return r.valor + r.id;
}
