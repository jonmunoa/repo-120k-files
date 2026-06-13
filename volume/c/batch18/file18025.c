// fichero 18025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18025;

Registro18025 crear_registro18025(int id) {
    Registro18025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18025(Registro18025 r) {
    return r.valor + r.id;
}
