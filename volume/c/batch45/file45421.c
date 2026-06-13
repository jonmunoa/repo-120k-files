// fichero 45421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45421;

Registro45421 crear_registro45421(int id) {
    Registro45421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45421(Registro45421 r) {
    return r.valor + r.id;
}
