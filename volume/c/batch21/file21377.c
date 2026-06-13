// fichero 21377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21377;

Registro21377 crear_registro21377(int id) {
    Registro21377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21377(Registro21377 r) {
    return r.valor + r.id;
}
