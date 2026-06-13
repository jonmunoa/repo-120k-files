// fichero 26169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26169;

Registro26169 crear_registro26169(int id) {
    Registro26169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26169(Registro26169 r) {
    return r.valor + r.id;
}
