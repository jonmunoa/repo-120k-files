// fichero 39869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39869;

Registro39869 crear_registro39869(int id) {
    Registro39869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39869(Registro39869 r) {
    return r.valor + r.id;
}
