// fichero 28109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28109;

Registro28109 crear_registro28109(int id) {
    Registro28109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28109(Registro28109 r) {
    return r.valor + r.id;
}
