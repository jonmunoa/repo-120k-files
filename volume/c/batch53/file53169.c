// fichero 53169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53169;

Registro53169 crear_registro53169(int id) {
    Registro53169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53169(Registro53169 r) {
    return r.valor + r.id;
}
