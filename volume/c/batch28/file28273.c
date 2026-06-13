// fichero 28273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28273;

Registro28273 crear_registro28273(int id) {
    Registro28273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28273(Registro28273 r) {
    return r.valor + r.id;
}
