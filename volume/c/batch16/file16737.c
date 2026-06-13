// fichero 16737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16737;

Registro16737 crear_registro16737(int id) {
    Registro16737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16737(Registro16737 r) {
    return r.valor + r.id;
}
