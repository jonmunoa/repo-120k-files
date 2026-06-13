// fichero 53053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53053;

Registro53053 crear_registro53053(int id) {
    Registro53053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53053(Registro53053 r) {
    return r.valor + r.id;
}
