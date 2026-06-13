// fichero 29193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29193;

Registro29193 crear_registro29193(int id) {
    Registro29193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29193(Registro29193 r) {
    return r.valor + r.id;
}
