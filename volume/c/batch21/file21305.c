// fichero 21305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21305;

Registro21305 crear_registro21305(int id) {
    Registro21305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21305(Registro21305 r) {
    return r.valor + r.id;
}
