// fichero 16241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16241;

Registro16241 crear_registro16241(int id) {
    Registro16241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16241(Registro16241 r) {
    return r.valor + r.id;
}
