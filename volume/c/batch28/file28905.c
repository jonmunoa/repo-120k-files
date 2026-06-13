// fichero 28905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28905;

Registro28905 crear_registro28905(int id) {
    Registro28905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28905(Registro28905 r) {
    return r.valor + r.id;
}
