// fichero 28657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28657;

Registro28657 crear_registro28657(int id) {
    Registro28657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28657(Registro28657 r) {
    return r.valor + r.id;
}
