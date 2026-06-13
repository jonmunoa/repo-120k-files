// fichero 8905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8905;

Registro8905 crear_registro8905(int id) {
    Registro8905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8905(Registro8905 r) {
    return r.valor + r.id;
}
