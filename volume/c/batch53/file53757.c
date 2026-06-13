// fichero 53757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53757;

Registro53757 crear_registro53757(int id) {
    Registro53757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53757(Registro53757 r) {
    return r.valor + r.id;
}
