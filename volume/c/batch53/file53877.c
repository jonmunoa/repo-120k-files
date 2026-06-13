// fichero 53877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53877;

Registro53877 crear_registro53877(int id) {
    Registro53877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53877(Registro53877 r) {
    return r.valor + r.id;
}
