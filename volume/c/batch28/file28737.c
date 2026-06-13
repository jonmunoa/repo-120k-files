// fichero 28737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28737;

Registro28737 crear_registro28737(int id) {
    Registro28737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28737(Registro28737 r) {
    return r.valor + r.id;
}
