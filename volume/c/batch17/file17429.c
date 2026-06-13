// fichero 17429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17429;

Registro17429 crear_registro17429(int id) {
    Registro17429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17429(Registro17429 r) {
    return r.valor + r.id;
}
