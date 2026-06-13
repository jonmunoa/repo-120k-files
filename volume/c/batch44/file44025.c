// fichero 44025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44025;

Registro44025 crear_registro44025(int id) {
    Registro44025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44025(Registro44025 r) {
    return r.valor + r.id;
}
