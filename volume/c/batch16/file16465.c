// fichero 16465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16465;

Registro16465 crear_registro16465(int id) {
    Registro16465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16465(Registro16465 r) {
    return r.valor + r.id;
}
