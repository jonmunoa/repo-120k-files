// fichero 16017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16017;

Registro16017 crear_registro16017(int id) {
    Registro16017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16017(Registro16017 r) {
    return r.valor + r.id;
}
