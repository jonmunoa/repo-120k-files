// fichero 50649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50649;

Registro50649 crear_registro50649(int id) {
    Registro50649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50649(Registro50649 r) {
    return r.valor + r.id;
}
