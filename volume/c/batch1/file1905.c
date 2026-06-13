// fichero 1905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1905;

Registro1905 crear_registro1905(int id) {
    Registro1905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1905(Registro1905 r) {
    return r.valor + r.id;
}
