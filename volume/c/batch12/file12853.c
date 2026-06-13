// fichero 12853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12853;

Registro12853 crear_registro12853(int id) {
    Registro12853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12853(Registro12853 r) {
    return r.valor + r.id;
}
