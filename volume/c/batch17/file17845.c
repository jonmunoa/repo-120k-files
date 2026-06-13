// fichero 17845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17845;

Registro17845 crear_registro17845(int id) {
    Registro17845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17845(Registro17845 r) {
    return r.valor + r.id;
}
