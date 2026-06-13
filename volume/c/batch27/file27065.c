// fichero 27065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27065;

Registro27065 crear_registro27065(int id) {
    Registro27065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27065(Registro27065 r) {
    return r.valor + r.id;
}
