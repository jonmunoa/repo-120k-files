// fichero 1657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1657;

Registro1657 crear_registro1657(int id) {
    Registro1657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1657(Registro1657 r) {
    return r.valor + r.id;
}
