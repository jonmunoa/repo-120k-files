// fichero 24025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24025;

Registro24025 crear_registro24025(int id) {
    Registro24025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24025(Registro24025 r) {
    return r.valor + r.id;
}
