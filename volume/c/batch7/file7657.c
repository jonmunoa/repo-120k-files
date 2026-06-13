// fichero 7657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7657;

Registro7657 crear_registro7657(int id) {
    Registro7657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7657(Registro7657 r) {
    return r.valor + r.id;
}
