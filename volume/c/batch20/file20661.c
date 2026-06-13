// fichero 20661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20661;

Registro20661 crear_registro20661(int id) {
    Registro20661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20661(Registro20661 r) {
    return r.valor + r.id;
}
