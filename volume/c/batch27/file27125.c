// fichero 27125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27125;

Registro27125 crear_registro27125(int id) {
    Registro27125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27125(Registro27125 r) {
    return r.valor + r.id;
}
