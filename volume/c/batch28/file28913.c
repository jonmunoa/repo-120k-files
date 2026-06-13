// fichero 28913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28913;

Registro28913 crear_registro28913(int id) {
    Registro28913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28913(Registro28913 r) {
    return r.valor + r.id;
}
