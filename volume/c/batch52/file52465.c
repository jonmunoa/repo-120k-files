// fichero 52465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52465;

Registro52465 crear_registro52465(int id) {
    Registro52465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52465(Registro52465 r) {
    return r.valor + r.id;
}
