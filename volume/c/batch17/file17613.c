// fichero 17613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17613;

Registro17613 crear_registro17613(int id) {
    Registro17613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17613(Registro17613 r) {
    return r.valor + r.id;
}
