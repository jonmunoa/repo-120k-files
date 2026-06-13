// fichero 17525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17525;

Registro17525 crear_registro17525(int id) {
    Registro17525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17525(Registro17525 r) {
    return r.valor + r.id;
}
