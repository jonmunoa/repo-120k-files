// fichero 45929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45929;

Registro45929 crear_registro45929(int id) {
    Registro45929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45929(Registro45929 r) {
    return r.valor + r.id;
}
