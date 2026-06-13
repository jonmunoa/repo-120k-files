// fichero 50073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50073;

Registro50073 crear_registro50073(int id) {
    Registro50073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50073(Registro50073 r) {
    return r.valor + r.id;
}
