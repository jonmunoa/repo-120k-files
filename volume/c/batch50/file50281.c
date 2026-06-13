// fichero 50281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50281;

Registro50281 crear_registro50281(int id) {
    Registro50281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50281(Registro50281 r) {
    return r.valor + r.id;
}
