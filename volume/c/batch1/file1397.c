// fichero 1397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1397;

Registro1397 crear_registro1397(int id) {
    Registro1397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1397(Registro1397 r) {
    return r.valor + r.id;
}
