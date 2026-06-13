// fichero 27225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27225;

Registro27225 crear_registro27225(int id) {
    Registro27225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27225(Registro27225 r) {
    return r.valor + r.id;
}
