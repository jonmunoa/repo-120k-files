// fichero 27497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27497;

Registro27497 crear_registro27497(int id) {
    Registro27497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27497(Registro27497 r) {
    return r.valor + r.id;
}
