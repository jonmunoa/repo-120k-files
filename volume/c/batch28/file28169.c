// fichero 28169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28169;

Registro28169 crear_registro28169(int id) {
    Registro28169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28169(Registro28169 r) {
    return r.valor + r.id;
}
