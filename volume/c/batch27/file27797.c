// fichero 27797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27797;

Registro27797 crear_registro27797(int id) {
    Registro27797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27797(Registro27797 r) {
    return r.valor + r.id;
}
