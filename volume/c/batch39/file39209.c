// fichero 39209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39209;

Registro39209 crear_registro39209(int id) {
    Registro39209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39209(Registro39209 r) {
    return r.valor + r.id;
}
