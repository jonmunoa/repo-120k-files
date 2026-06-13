// fichero 27685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27685;

Registro27685 crear_registro27685(int id) {
    Registro27685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27685(Registro27685 r) {
    return r.valor + r.id;
}
