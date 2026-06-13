// fichero 29345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29345;

Registro29345 crear_registro29345(int id) {
    Registro29345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29345(Registro29345 r) {
    return r.valor + r.id;
}
