// fichero 657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro657;

Registro657 crear_registro657(int id) {
    Registro657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro657(Registro657 r) {
    return r.valor + r.id;
}
