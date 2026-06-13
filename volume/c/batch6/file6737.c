// fichero 6737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6737;

Registro6737 crear_registro6737(int id) {
    Registro6737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6737(Registro6737 r) {
    return r.valor + r.id;
}
