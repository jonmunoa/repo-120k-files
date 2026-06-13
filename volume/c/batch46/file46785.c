// fichero 46785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46785;

Registro46785 crear_registro46785(int id) {
    Registro46785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46785(Registro46785 r) {
    return r.valor + r.id;
}
