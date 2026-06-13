// fichero 8917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8917;

Registro8917 crear_registro8917(int id) {
    Registro8917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8917(Registro8917 r) {
    return r.valor + r.id;
}
