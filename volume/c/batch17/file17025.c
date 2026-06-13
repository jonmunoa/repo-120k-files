// fichero 17025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17025;

Registro17025 crear_registro17025(int id) {
    Registro17025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17025(Registro17025 r) {
    return r.valor + r.id;
}
