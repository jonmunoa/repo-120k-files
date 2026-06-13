// fichero 47861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47861;

Registro47861 crear_registro47861(int id) {
    Registro47861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47861(Registro47861 r) {
    return r.valor + r.id;
}
