// fichero 17837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17837;

Registro17837 crear_registro17837(int id) {
    Registro17837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17837(Registro17837 r) {
    return r.valor + r.id;
}
