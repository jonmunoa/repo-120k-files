// fichero 29945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29945;

Registro29945 crear_registro29945(int id) {
    Registro29945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29945(Registro29945 r) {
    return r.valor + r.id;
}
