// fichero 45837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45837;

Registro45837 crear_registro45837(int id) {
    Registro45837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45837(Registro45837 r) {
    return r.valor + r.id;
}
