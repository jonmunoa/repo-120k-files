// fichero 10837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10837;

Registro10837 crear_registro10837(int id) {
    Registro10837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10837(Registro10837 r) {
    return r.valor + r.id;
}
