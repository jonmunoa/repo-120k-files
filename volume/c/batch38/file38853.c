// fichero 38853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38853;

Registro38853 crear_registro38853(int id) {
    Registro38853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38853(Registro38853 r) {
    return r.valor + r.id;
}
