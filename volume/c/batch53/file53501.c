// fichero 53501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53501;

Registro53501 crear_registro53501(int id) {
    Registro53501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53501(Registro53501 r) {
    return r.valor + r.id;
}
