// fichero 36025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36025;

Registro36025 crear_registro36025(int id) {
    Registro36025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36025(Registro36025 r) {
    return r.valor + r.id;
}
