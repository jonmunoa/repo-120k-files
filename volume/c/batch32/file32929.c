// fichero 32929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32929;

Registro32929 crear_registro32929(int id) {
    Registro32929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32929(Registro32929 r) {
    return r.valor + r.id;
}
