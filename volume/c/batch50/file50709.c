// fichero 50709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50709;

Registro50709 crear_registro50709(int id) {
    Registro50709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50709(Registro50709 r) {
    return r.valor + r.id;
}
