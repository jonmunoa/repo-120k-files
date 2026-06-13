// fichero 29157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29157;

Registro29157 crear_registro29157(int id) {
    Registro29157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29157(Registro29157 r) {
    return r.valor + r.id;
}
