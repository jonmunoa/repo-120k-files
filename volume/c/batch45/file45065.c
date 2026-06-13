// fichero 45065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45065;

Registro45065 crear_registro45065(int id) {
    Registro45065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45065(Registro45065 r) {
    return r.valor + r.id;
}
