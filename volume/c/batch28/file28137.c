// fichero 28137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28137;

Registro28137 crear_registro28137(int id) {
    Registro28137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28137(Registro28137 r) {
    return r.valor + r.id;
}
