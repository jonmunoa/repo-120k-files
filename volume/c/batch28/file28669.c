// fichero 28669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28669;

Registro28669 crear_registro28669(int id) {
    Registro28669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28669(Registro28669 r) {
    return r.valor + r.id;
}
