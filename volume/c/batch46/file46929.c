// fichero 46929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46929;

Registro46929 crear_registro46929(int id) {
    Registro46929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46929(Registro46929 r) {
    return r.valor + r.id;
}
