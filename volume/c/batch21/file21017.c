// fichero 21017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21017;

Registro21017 crear_registro21017(int id) {
    Registro21017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21017(Registro21017 r) {
    return r.valor + r.id;
}
