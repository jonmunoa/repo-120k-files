// fichero 16661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16661;

Registro16661 crear_registro16661(int id) {
    Registro16661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16661(Registro16661 r) {
    return r.valor + r.id;
}
