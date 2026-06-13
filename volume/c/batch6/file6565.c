// fichero 6565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6565;

Registro6565 crear_registro6565(int id) {
    Registro6565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6565(Registro6565 r) {
    return r.valor + r.id;
}
