// fichero 17673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17673;

Registro17673 crear_registro17673(int id) {
    Registro17673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17673(Registro17673 r) {
    return r.valor + r.id;
}
