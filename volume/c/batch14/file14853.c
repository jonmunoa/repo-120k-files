// fichero 14853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14853;

Registro14853 crear_registro14853(int id) {
    Registro14853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14853(Registro14853 r) {
    return r.valor + r.id;
}
