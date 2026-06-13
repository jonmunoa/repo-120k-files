// fichero 29 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29;

Registro29 crear_registro29(int id) {
    Registro29 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29(Registro29 r) {
    return r.valor + r.id;
}
