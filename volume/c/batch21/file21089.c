// fichero 21089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21089;

Registro21089 crear_registro21089(int id) {
    Registro21089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21089(Registro21089 r) {
    return r.valor + r.id;
}
