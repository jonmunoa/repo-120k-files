// fichero 45961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45961;

Registro45961 crear_registro45961(int id) {
    Registro45961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45961(Registro45961 r) {
    return r.valor + r.id;
}
