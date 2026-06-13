// fichero 1693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1693;

Registro1693 crear_registro1693(int id) {
    Registro1693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1693(Registro1693 r) {
    return r.valor + r.id;
}
