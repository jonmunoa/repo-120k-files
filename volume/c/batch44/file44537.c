// fichero 44537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44537;

Registro44537 crear_registro44537(int id) {
    Registro44537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44537(Registro44537 r) {
    return r.valor + r.id;
}
