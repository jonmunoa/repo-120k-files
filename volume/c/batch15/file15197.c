// fichero 15197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15197;

Registro15197 crear_registro15197(int id) {
    Registro15197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15197(Registro15197 r) {
    return r.valor + r.id;
}
