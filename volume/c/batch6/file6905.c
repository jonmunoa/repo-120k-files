// fichero 6905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6905;

Registro6905 crear_registro6905(int id) {
    Registro6905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6905(Registro6905 r) {
    return r.valor + r.id;
}
