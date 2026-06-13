// fichero 31093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31093;

Registro31093 crear_registro31093(int id) {
    Registro31093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31093(Registro31093 r) {
    return r.valor + r.id;
}
