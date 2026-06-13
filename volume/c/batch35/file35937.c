// fichero 35937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35937;

Registro35937 crear_registro35937(int id) {
    Registro35937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35937(Registro35937 r) {
    return r.valor + r.id;
}
