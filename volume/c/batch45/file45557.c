// fichero 45557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45557;

Registro45557 crear_registro45557(int id) {
    Registro45557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45557(Registro45557 r) {
    return r.valor + r.id;
}
