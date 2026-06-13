// fichero 53685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53685;

Registro53685 crear_registro53685(int id) {
    Registro53685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53685(Registro53685 r) {
    return r.valor + r.id;
}
