// fichero 50937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50937;

Registro50937 crear_registro50937(int id) {
    Registro50937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50937(Registro50937 r) {
    return r.valor + r.id;
}
