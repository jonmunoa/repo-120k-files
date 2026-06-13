// fichero 19861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19861;

Registro19861 crear_registro19861(int id) {
    Registro19861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19861(Registro19861 r) {
    return r.valor + r.id;
}
