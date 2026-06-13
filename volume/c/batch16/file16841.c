// fichero 16841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16841;

Registro16841 crear_registro16841(int id) {
    Registro16841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16841(Registro16841 r) {
    return r.valor + r.id;
}
