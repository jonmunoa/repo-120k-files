// fichero 29129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29129;

Registro29129 crear_registro29129(int id) {
    Registro29129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29129(Registro29129 r) {
    return r.valor + r.id;
}
