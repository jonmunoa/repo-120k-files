// fichero 31181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31181;

Registro31181 crear_registro31181(int id) {
    Registro31181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31181(Registro31181 r) {
    return r.valor + r.id;
}
