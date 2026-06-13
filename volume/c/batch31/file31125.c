// fichero 31125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31125;

Registro31125 crear_registro31125(int id) {
    Registro31125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31125(Registro31125 r) {
    return r.valor + r.id;
}
