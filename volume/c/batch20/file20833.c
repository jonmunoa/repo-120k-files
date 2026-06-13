// fichero 20833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20833;

Registro20833 crear_registro20833(int id) {
    Registro20833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20833(Registro20833 r) {
    return r.valor + r.id;
}
