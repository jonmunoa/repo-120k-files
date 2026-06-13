// fichero 1757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1757;

Registro1757 crear_registro1757(int id) {
    Registro1757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1757(Registro1757 r) {
    return r.valor + r.id;
}
