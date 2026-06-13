// fichero 47929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47929;

Registro47929 crear_registro47929(int id) {
    Registro47929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47929(Registro47929 r) {
    return r.valor + r.id;
}
