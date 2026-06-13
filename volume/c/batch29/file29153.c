// fichero 29153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29153;

Registro29153 crear_registro29153(int id) {
    Registro29153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29153(Registro29153 r) {
    return r.valor + r.id;
}
