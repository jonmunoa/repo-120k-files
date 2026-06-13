// fichero 35025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35025;

Registro35025 crear_registro35025(int id) {
    Registro35025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35025(Registro35025 r) {
    return r.valor + r.id;
}
