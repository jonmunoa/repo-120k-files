// fichero 21285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21285;

Registro21285 crear_registro21285(int id) {
    Registro21285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21285(Registro21285 r) {
    return r.valor + r.id;
}
