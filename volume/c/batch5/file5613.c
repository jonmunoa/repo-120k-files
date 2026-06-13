// fichero 5613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5613;

Registro5613 crear_registro5613(int id) {
    Registro5613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5613(Registro5613 r) {
    return r.valor + r.id;
}
