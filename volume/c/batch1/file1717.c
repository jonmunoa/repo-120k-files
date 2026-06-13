// fichero 1717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1717;

Registro1717 crear_registro1717(int id) {
    Registro1717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1717(Registro1717 r) {
    return r.valor + r.id;
}
