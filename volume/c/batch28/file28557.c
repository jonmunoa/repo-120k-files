// fichero 28557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28557;

Registro28557 crear_registro28557(int id) {
    Registro28557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28557(Registro28557 r) {
    return r.valor + r.id;
}
