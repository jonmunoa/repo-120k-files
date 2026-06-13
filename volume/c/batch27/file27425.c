// fichero 27425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27425;

Registro27425 crear_registro27425(int id) {
    Registro27425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27425(Registro27425 r) {
    return r.valor + r.id;
}
