// fichero 32657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32657;

Registro32657 crear_registro32657(int id) {
    Registro32657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32657(Registro32657 r) {
    return r.valor + r.id;
}
