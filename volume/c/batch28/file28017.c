// fichero 28017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28017;

Registro28017 crear_registro28017(int id) {
    Registro28017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28017(Registro28017 r) {
    return r.valor + r.id;
}
