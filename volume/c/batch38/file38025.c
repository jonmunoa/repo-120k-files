// fichero 38025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38025;

Registro38025 crear_registro38025(int id) {
    Registro38025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38025(Registro38025 r) {
    return r.valor + r.id;
}
