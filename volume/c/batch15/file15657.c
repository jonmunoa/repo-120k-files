// fichero 15657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15657;

Registro15657 crear_registro15657(int id) {
    Registro15657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15657(Registro15657 r) {
    return r.valor + r.id;
}
