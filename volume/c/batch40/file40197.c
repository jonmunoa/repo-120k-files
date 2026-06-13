// fichero 40197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40197;

Registro40197 crear_registro40197(int id) {
    Registro40197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40197(Registro40197 r) {
    return r.valor + r.id;
}
