// fichero 39545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39545;

Registro39545 crear_registro39545(int id) {
    Registro39545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39545(Registro39545 r) {
    return r.valor + r.id;
}
