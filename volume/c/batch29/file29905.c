// fichero 29905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29905;

Registro29905 crear_registro29905(int id) {
    Registro29905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29905(Registro29905 r) {
    return r.valor + r.id;
}
