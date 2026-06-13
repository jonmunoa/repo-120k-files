// fichero 27241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27241;

Registro27241 crear_registro27241(int id) {
    Registro27241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27241(Registro27241 r) {
    return r.valor + r.id;
}
