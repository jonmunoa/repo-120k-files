// fichero 28677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28677;

Registro28677 crear_registro28677(int id) {
    Registro28677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28677(Registro28677 r) {
    return r.valor + r.id;
}
