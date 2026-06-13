// fichero 53093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53093;

Registro53093 crear_registro53093(int id) {
    Registro53093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53093(Registro53093 r) {
    return r.valor + r.id;
}
