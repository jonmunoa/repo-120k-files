// fichero 52845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52845;

Registro52845 crear_registro52845(int id) {
    Registro52845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52845(Registro52845 r) {
    return r.valor + r.id;
}
