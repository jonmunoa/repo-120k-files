// fichero 22513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22513;

Registro22513 crear_registro22513(int id) {
    Registro22513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22513(Registro22513 r) {
    return r.valor + r.id;
}
