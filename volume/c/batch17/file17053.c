// fichero 17053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17053;

Registro17053 crear_registro17053(int id) {
    Registro17053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17053(Registro17053 r) {
    return r.valor + r.id;
}
