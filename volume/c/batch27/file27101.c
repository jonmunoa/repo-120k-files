// fichero 27101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27101;

Registro27101 crear_registro27101(int id) {
    Registro27101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27101(Registro27101 r) {
    return r.valor + r.id;
}
