// fichero 28733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28733;

Registro28733 crear_registro28733(int id) {
    Registro28733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28733(Registro28733 r) {
    return r.valor + r.id;
}
