// fichero 1193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1193;

Registro1193 crear_registro1193(int id) {
    Registro1193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1193(Registro1193 r) {
    return r.valor + r.id;
}
