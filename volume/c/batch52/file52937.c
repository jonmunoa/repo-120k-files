// fichero 52937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52937;

Registro52937 crear_registro52937(int id) {
    Registro52937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52937(Registro52937 r) {
    return r.valor + r.id;
}
