// fichero 53025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53025;

Registro53025 crear_registro53025(int id) {
    Registro53025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53025(Registro53025 r) {
    return r.valor + r.id;
}
