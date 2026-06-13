// fichero 45657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45657;

Registro45657 crear_registro45657(int id) {
    Registro45657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45657(Registro45657 r) {
    return r.valor + r.id;
}
