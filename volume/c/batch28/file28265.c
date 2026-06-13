// fichero 28265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28265;

Registro28265 crear_registro28265(int id) {
    Registro28265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28265(Registro28265 r) {
    return r.valor + r.id;
}
